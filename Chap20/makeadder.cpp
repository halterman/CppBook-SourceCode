 #include <iostream>
 #include <functional>
 
 std::function<int(int)> make_adder() {
     int loc_val = 2;   // Local variable definition
     return [loc_val](int x){ return x + loc_val; };  // Returns a function
 }
 
 int main() {
     auto f = make_adder();
     std::cout << f(10) << '\n';
     std::cout << f(2) << '\n';
 }

