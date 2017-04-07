 #include <iostream>
 #include <memory>
 
 int main() {
     auto ip1 = std::make_shared<int>(5);
     std::cout << *ip1 << '\n';
     std::cout << ip1.use_count() << '\n';
     auto ip2 = ip1;
     std::cout << ip1.use_count() << '\n';
     auto ip3 = ip1;
     std::cout << ip1.use_count() << '\n';
     ip2 = std::make_shared<int>(7);
     std::cout << ip1.use_count() << '\n';
     ip3 = nullptr;
     std::cout << ip1.use_count() << '\n';
     ip1 = nullptr;
     std::cout << ip1.use_count() << '\n';
 }

