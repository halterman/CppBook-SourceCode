 #include <iostream>

 template <int N>
 int scale(int value) {
     return value * N;
 }

 int main() {
     std::cout << scale<3>(5) << '\n';
     std::cout << scale<4>(10) << '\n';
 }

