 #include <iostream>
 #include "fibonacci.h"
 
 // Compares the behaviors of the fibonacci and fibonacci2 functions.
 int main() {
     // Print the first 50 Fibonacci numbers
     for (unsigned i = 0; i <= 50; i++) 
         std::cout << i << ": " << fibonacci(i) << " " 
                   << fibonacci2(i) << '\n';
 }

