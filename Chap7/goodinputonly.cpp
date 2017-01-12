 #include <iostream>

 int main() {
     int in_value = -1;
     std::cout << "Please enter an integer in the range 0-10: ";
     // Insist on values in the range 0...10
     while (in_value < 0 || in_value > 10)
         std::cin >> in_value;
     // in_value at this point is guaranteed to be within range
     std::cout << "Legal value entered was " << in_value << '\n';
 }

