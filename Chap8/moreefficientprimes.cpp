 #include <iostream>
 #include <cmath>

 int main() {
    
     int max_value;
     std::cout << "Display primes up to what value? ";
     std::cin >> max_value;
     for (int value = 2; value <= max_value; value++) {
         //  See if value is prime
         bool is_prime = true;  // Provisionally, value is prime
         double r = value, root = sqrt(r);
         //  Try all possible factors from 2 to the square
         //  root of value
         for (int trial_factor = 2; 
               is_prime && trial_factor <= root; trial_factor++)
             is_prime = (value % trial_factor != 0);
         if (is_prime)
             std::cout << value <<  " ";   //  Display the prime number
     }
     std::cout << '\n';  //  Move cursor down to next line
 }

