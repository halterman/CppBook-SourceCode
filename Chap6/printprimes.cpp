 #include <iostream>

 int main() {
     int max_value;
     std::cout << "Display primes up to what value? ";
     std::cin >> max_value;
     int value = 2;  // Smallest prime number
     while (value <= max_value) {
         // See if value is prime
         bool is_prime = true;  // Provisionally, value is prime
         // Try all possible factors from 2 to value - 1
         int trial_factor = 2;
         while (trial_factor < value) {
             if (value % trial_factor == 0) {
                 is_prime = false;  // Found a factor
                 break; // No need to continue; it is NOT prime
             }
             trial_factor++;
         }
         if (is_prime)
             std::cout << value <<  " ";   // Display the prime number
         value++;   // Try the next potential prime number
     }
     std::cout << '\n';  // Move cursor down to next line
 }

