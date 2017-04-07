 #include <iostream>
 
 class Widget {
 public:
     int data;
     Widget(int d): data{d} {
         std::cout << "Creating widget " << data << " ("
                   << reinterpret_cast<uintptr_t>(this) << ")\n";
     }
 };
 
 void func1(Widget w) {
     std::cout << "Calling func1 with widget " << w.data << " ("
               << reinterpret_cast<uintptr_t>(&w) << ")\n";
 }
 
 void func2(const Widget& w) { 
     std::cout << "Calling func2 with widget " << w.data << " ("
               << reinterpret_cast<uintptr_t>(&w) << ")\n";
 }
 
 int main() {
     Widget wid{5};
     std::cout << reinterpret_cast<uintptr_t>(&wid) << '\n';
     std::cout << "--------------\n";
     func1(wid);
     std::cout << "--------------\n";
     func2(wid);
     std::cout << "--------------\n";
 }

