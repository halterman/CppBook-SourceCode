 #include <iostream>
 #include <vector>
 #include <ctime>
 
 //  Display the prime numbers between 2 and 500,000 and
 //  time how long it takes
 
 //  Largest potential prime considered
 const int MAX = 2000000;
 
 //  Each position in the Boolean vector indicates
 //  if the number of that position is not prime: 
 //  false means "prime," and true means "composite."
 //  Initially all numbers are prime until proven otherwise
 std::vector<bool> nonprimes(MAX);  //  Global vector initialized to all false
 
 void count_primes1() {
     int count = 0;
     clock_t start_time = clock();   //  Record start time
     for (int value = 2; value <= MAX; value++) {
         //  See if value is prime
         bool is_prime = true;  // Provisionally, value is prime
         //  Try all possible factors from 2 to the value - 1
         for (int trial_factor = 2; 
               is_prime && trial_factor < value; trial_factor++)
             is_prime = (value % trial_factor != 0);
         if (is_prime)
             count++;  //  Count the prime number
     }
     //  Print the elapsed time
     std::cout << "Count = " << count << "  ";
     std::cout << "Elapsed time: " 
         << static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC 
         << " seconds\n";
 }
 
 void count_primes2() {
     int count = 0;
     clock_t start_time = clock();   //  Record start time
     for (int value = 2; value <= MAX; value++) {
         //  See if value is prime
         bool is_prime = true;  // Provisionally, value is prime
         double r = value, root = sqrt(r);
         //  Try all possible factors from 2 to the square
         //  root of value
         for (int trial_factor = 2; 
               is_prime && trial_factor <= root; trial_factor++)
             is_prime = (value % trial_factor != 0);
         if (is_prime)
             count++;  //  Count the prime number
     }
     //  Print the elapsed time
     std::cout << "Count = " << count << "  ";
     std::cout << "Elapsed time: " 
         << static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC 
         << " seconds\n";
 }
 
 void count_primes3() {
     int count = 0;
     clock_t start_time = clock();   //  Record start time
 
     //  First prime number is 2; 0 and 1 are not prime
     nonprimes[0] = nonprimes[1] = true;
 
     //  Start at the first prime number, 2.
     for (int i = 2; i < MAX; i++) {
         //  See if i is prime
         if (!nonprimes[i])  {
             count++;  //  It's prime, so count it
             //  It is prime, so eliminate all of its 
             //  multiples that cannot be prime
             for (int j = 2*i; j < MAX; j += i)
                 nonprimes[j] = true;
         }
     }
     //  Print the elapsed time
     std::cout << "Count = " << count << "  ";
     std::cout << "Elapsed time: " 
         << static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC 
         << " seconds\n";
 }
 
 int main() {
     count_primes1();
     count_primes2();
     count_primes3();
 }

