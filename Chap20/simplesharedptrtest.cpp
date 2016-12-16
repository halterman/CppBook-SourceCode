 #include <iostream>
 #include <string>
 #include <memory>
 
 struct Widget {
     static unsigned id_source;
     unsigned id;
     Widget(): id(id_source++) {
         std::cout << "Creating a widget #" << id << '\n';
     }
     ~Widget() {
         std::cout << "Destroying a widget #" << id << '\n';
     }
 };
 
 unsigned Widget::id_source = 0;
 
 // Global shared pointer
 auto global_ptr = std::make_shared<Widget>();
 
 std::shared_ptr<Widget> make_widget() {
     std::cout << "---- Entering make_widget ----\n";
     std::cout << "---- Leaving make_widget ----\n";
     return std::make_shared<Widget>();
 }
 
 void test1() {
     std::cout << "---- Entering Test 1 ----\n";
     // Make p point to a dynamically created a widget object 
     auto p = std::make_shared<Widget>();
     std::cout << p->id << '\n'; 
     p->id = 25;  
     std::cout << p->id << '\n'; 
     std::cout << "---- Leaving Test 1 ----\n";
 }
 
 void test2() {
     std::cout << "---- Entering Test 2 ----\n";
     // Make q point to a dynamically created a widget object 
     auto q = std::make_shared<Widget>();
     std::cout << q->id << '\n';
     q = nullptr;  // Make q point to nothing
     std::cout << "---- Leaving Test 2 ----\n";
 }
 
 void test3() {
     std::cout << "---- Entering Test 3 ----\n";
     // Make p point to a dynamically created integer
     auto p = std::make_shared<int>(55);
     std::cout << *p << '\n';        // Prints 55
     *p = -4;                        // Reassign 
     std::cout << *p << '\n';        // Prints -4
     std::cout << "---- Leaving Test 3 ----\n";
 }
 
 void test4() {
     std::cout << "---- Entering Test 4 ----\n";
     static auto p = make_widget();
     std::cout << p->id << '\n'; 
     std::cout << "---- Leaving Test 4 ----\n";
 }
 
 void test5() {
     std::cout << "---- Entering Test 5 ----\n";
     auto p = make_widget();
     std::cout << p->id << '\n'; 
     std::cout << "---- Leaving Test 5 ----\n";
 }
 
 void test6() {
     std::cout << "---- Entering Test 6 ----\n";
     // Aliasing
     auto q = std::make_shared<Widget>();
     auto r = q;     // r aliases q, no new memory allocated
     auto s = q;     // s aliases q, no new memory allocated
     std::cout << q->id << ' '    
               << r->id << ' '    
               << s->id << '\n';    
     q = nullptr;
     std::cout << r->id << ' '   
               << s->id << '\n';    
     r = nullptr;
     std::cout << s->id << '\n';
     s = nullptr;     // Deallocates the widget object
     std::cout << "---- Leaving Test 6 ----\n";
 }
 
 
 int main() {
     std::cout << "---- Entering main ----\n";
     test1();
     test2();
     test3();
     test4();
     test5();
     test6();
     std::cout << "---- Leaving main ----\n";
 } 

