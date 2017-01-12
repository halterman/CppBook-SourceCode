 #include <iostream>

 /*
  *  less_than(a, b)
  *     Returns true if a < b; otherwise, returns
  *     false.
  */
 bool less_than(int a, int b) {
     return a < b;
 }

 int main() {
     std::cout << less_than(2, 3) << '\n';
     std::cout << less_than(2.2, 2.7) << '\n';
     std::cout << less_than(2.7, 2.2) << '\n';
 }

