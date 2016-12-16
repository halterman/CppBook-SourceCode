 #include <iostream>
 #include <vector>
 #include <memory>
 
 struct Widget {
     int value;
     Widget(int value): value(value) {
         std::cout << "Creating widget " << value << '\n';
     }
     ~Widget() {
         std::cout << "Destroying widget " << value << '\n';
     }
 };
 
 std::shared_ptr<Widget> get_widget() {
     static int pos = 0;
     static std::vector<std::shared_ptr<Widget>> wdgt_pool {
             std::make_shared<Widget>(23), std::make_shared<Widget>(45), 
             std::make_shared<Widget>(16), std::make_shared<Widget>(12), 
             std::make_shared<Widget>(3), std::make_shared<Widget>(20), 
             std::make_shared<Widget>(10)};
     pos = (pos + 1) % wdgt_pool.size();
     return wdgt_pool[pos];
 }
 
 void process(int n) {
     std::vector<std::shared_ptr<Widget>> vec;
     while (n-- > 0)
         vec.push_back(get_widget());
     // No need to clean up vector; smart pointers do it for us
 }
 
 int main() {
     std::cout << "Entering main\n";
     process(10);    
     std::cout << "Leaving main\n";
 }

