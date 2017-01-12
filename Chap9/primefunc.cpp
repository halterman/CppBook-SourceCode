 #include <iostream>
 #include <cmath>

 /*
  *  is_prime(n)
  *     Determines the primality of a given value
  *     n an integer to test for primality
  *     Returns true if n is prime; otherwise, returns false
  */
 bool is_prime(int n) {
     bool result = true;  // Provisionally, n is prime
     double r = n, root = sqrt(r);
     // Try all possible factors from 2 to the square
     // root of n
     for (int trial_factor = 2; 
           result && trial_factor <= root; trial_factor++)
         result = (n % trial_factor != 0);
     return result;
 }

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
             std::cout << value <<  " "; // Display the prime number
     std::cout << '\n';  // Move cursor down to next line
 }

