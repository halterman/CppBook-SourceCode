 #include <iostream>
 #include "prime.h"

 /*
  *  main
  *     Tests for primality each integer from 2 
  *     up to a value provided by the user.
  *     If an integer is prime, it prints it; 
  *     otherwise, the number is not printed.
  */
 int main() {
     int max_value;
     std::cout << "Display primes up to what value? ";
     std::cin >> max_value;
     for (int value = 2; value <= max_value; value++) 
         if (is_prime(value)) // See if value is prime
             std::cout << value <<  " "; //  Display the prime number
     std::cout << '\n';  //  Move cursor down to next line
 }

