 #include <iostream>
 #include <ctime>
 #include <cmath>

 //  Display the prime numbers between 2 and 500,000 and
 //  time how long it takes

 int main() {
     clock_t start_time = clock(),   //  Record start time
             end_time;
     for (int value = 2; value <= 500000; value++) {
         //  See if value is prime
         bool is_prime = true;  // Provisionally, value is prime
         //  Try all possible factors from 2 to n - 1
         for (int trial_factor = 2; 
               is_prime && trial_factor < value;
               trial_factor++)
             is_prime = (value % trial_factor != 0);
         if (is_prime)
             std::cout << value <<  " ";   //  Display the prime number
     }
     std::cout << '\n';  //  Move cursor down to next line
     end_time = clock();
     //  Print the elapsed time
     std::cout << "Elapsed time: " 
          << static_cast<double>(end_time - start_time)/CLOCKS_PER_SEC 
          << " sec." << '\n';
 }

