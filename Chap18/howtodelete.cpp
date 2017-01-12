 #include <iostream>
 #include <vector>
 
 struct Widget {
     int value;
     Widget(int value): value(value) {
         std::cout << "Creating widget " << value << '\n';
     }
     ~Widget() {
         std::cout << "Destroying widget " << value << '\n';
     }
 };
 
 Widget *get_widget() {
     static int pos = 0;
     static std::vector<Widget *> widget_pool {new Widget(23), new Widget(45), 
                                               new Widget(16), new Widget(12), 
                                               new Widget(3), new Widget(20), 
                                               new Widget(10)};
     pos = (pos + 1) % widget_pool.size();
     return widget_pool[pos];
 }
 
 void process(int n) {
     std::vector<Widget *> vec;
     while (n-- > 0)
         vec.push_back(get_widget());
     // Clean up vector?
     for (auto& elem : vec) 
         delete elem;
 }
 
 int main() {
     std::cout << "Entering main\n";
     process(10);    
     std::cout << "Leaving main\n";
 }

