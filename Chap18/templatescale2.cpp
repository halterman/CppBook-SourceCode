 #include <iostream>

 template <typename T, int N>
 T scale(const T& value) {
     return value * N;
 }

 int main() {
     std::cout << scale<double, 3>(5.3) << '\n';
     std::cout << scale<int, 4>(10) << '\n';
 }

