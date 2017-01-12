 #include <iostream>
 
 int main() {
     int dividend, divisor, quotient;
 
     // Get two integers from the user
     std::cout << "Please enter two integers to divide:";
     std::cin >> dividend >> divisor;
     // If possible, divide them and report the result
     if (divisor != 0) {
         quotient = dividend / divisor;
         std::cout << dividend << " divided by " << divisor << " is " 
                   << quotient << '\n';
     }
 }

