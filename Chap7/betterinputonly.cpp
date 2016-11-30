 #include <iostream>

 int main() {
     int in_value;
     std::cout << "Please enter an integer in the range 0-10: ";
     //  Insist on values in the range 0...10
     do
         std::cin >> in_value;
     while (in_value < 0 || in_value > 10);
     //  in_value at this point is guaranteed to be within range
     std::cout << "Legal value entered was " << in_value << '\n';
 }

