 #include <iostream>
 
 int main() {
     int dividend, divisor;
 
     //  Get two integers from the user
     std::cout << "Please enter two integers to divide:";
     std::cin >> dividend >> divisor;
     //  If possible, divide them and report the result
     if (divisor != 0) 
         std::cout << dividend << "/" << divisor << " = " 
              << dividend/divisor << '\n';
 }

