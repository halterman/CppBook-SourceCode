 // File dividedanger.cpp
 
 #include <iostream>
 
 int main() {
     int dividend, divisor;
 
     // Get two integers from the user
     std::cout << "Please enter two integers to divide:";
     std::cin >> dividend >> divisor;
     // Divide them and report the result
     std::cout << dividend << "/" << divisor << " = " 
               << dividend/divisor << '\n';
 }

