 #include <iostream>

 class Widget {
     int data;
 public:
     Widget(int d): data(d) {}
     friend class Gadget;
 };

 class Gadget {
     int value;
 public:
     // A Gadget objects copies the private data from a Widget object
     Gadget(const Widget& w): value(w.data) {}
     int get() const {
         return value;
     }
     bool compare(const Widget& w) const {
         return value == w.data;
     }
 };

 int main() {
     Widget wid{45};
     Gadget gad{wid};
     std::cout << gad.get() << '\n';
     if (gad.compare(wid))
         std::cout << "They are the same" << '\n';
 }

