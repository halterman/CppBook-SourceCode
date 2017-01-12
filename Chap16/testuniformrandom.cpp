 #include <iostream>
 #include <iomanip>
 #include "uniformrandom.h"

 int main() {
     // Pseudorandom number generator with range 0...9,999
     UniformRandomGenerator rand(0, 9999);
 
     // Total counts over all the runs.
     // Make these double-precision floating-point numbers
     // so the average computation at the end will use floating-point
     // arithmetic.
     double total5 = 0.0, total9995 = 0.0;
 
     // Accumulate the results of 10 trials, with each trial
     // generating 1,000,000,000 pseudorandom numbers
     const int NUMBER_OF_TRIALS = 10;
 
     for (int trial = 1; trial <= NUMBER_OF_TRIALS; trial++) {
         // Initialize counts for this run of a billion trials
         int count5 = 0, count9995 = 0;
         // Generate one billion pseudorandom numbers in the range
         // 0...9,999 and count the  number of times 5 and 9,995 appear
         for (int i = 0; i < 1000000000; i++) {
             // Generate a pseudorandom number in the range 0...9,999
             int r = rand();
             if (r == 5)
                 count5++;     // Number 5 generated, so count it
             else if (r == 9995)
                 count9995++;  // Number 9,995 generated, so count it
         }
         // Display the number of times the program generated 5 and 9,995
         std::cout << "Trial #" << std::setw(2) << trial << "  5: " 
                   << std::setw(6) << count5
                   << "    9995: " << std::setw(6) << count9995 << '\n';
         total5 += count5;         // Accumulate the counts to
         total9995 += count9995;   // average them at the end
     }
     std::cout << "-------------------\n";
     std::cout << "Averages for " << NUMBER_OF_TRIALS << " trials:  5: "
               << std::setw(6) << total5 / NUMBER_OF_TRIALS << "  9995: "
               << std::setw(6) << total9995 / NUMBER_OF_TRIALS << '\n';
 }

