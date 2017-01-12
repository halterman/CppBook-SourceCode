 #include <iostream>
 
 int twice(const int& n) {
     std::cout << "Calling with reference parameter, result is ==> ";
     return 2 * n;
 }
 
 int twice(int&& n) {
     std::cout << "Calling with rvalue reference parameter, result is ==> ";
     return 2 * n;
 }
 
 int main() {
     int x = 6;
     std::cout << twice(x) << '\n'; 
     std::cout << twice(x + 2) << '\n'; 
     std::cout << twice(6) << '\n'; 
 }

