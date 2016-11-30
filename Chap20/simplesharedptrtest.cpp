 #include <iostream>
 #include <memory>
 
 struct Widget {
     int value;
     Widget(int val): value(val) {
         std::cout << "Creating a widget with value " << value << '\n';
     }
     ~Widget() {
         std::cout << "Destroying a widget with value " << value << '\n';
     }
 };
 
 void test_smart_pointers() {
     // Make p point to a dynamically created a widget object 
     auto p = std::make_shared<Widget>(12);
     std::cout << p->value << '\n';    // Prints 12
     p->value = 5;  
     std::cout << p->value << '\n';    // Prints 5
 
     std::shared_ptr<Widget> q(new Widget(400));
     std::cout << q->value << '\n';    // Prints 400
    
     // Make ip point to a dynamically created integer
     auto ip = std::make_shared<int>(55);
     std::cout << *ip << '\n';        // Prints 55
     *ip = -4;                        // Reassign 
     std::cout << *ip << '\n';        // Prints -4
 }
 
 int main() {
     test_smart_pointers();
 } 

