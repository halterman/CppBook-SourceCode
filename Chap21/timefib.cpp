 #include <iostream>
 #include <ctime>
 #include <functional>
 
 #include "fibonacci.h"
 
 // f is a function that accepts a single parameter, n is a number
 // to pass to the function.
 // Measures the time for function f to execute given parameter n.
 // Returns the cumulative elapsed time in milliseconds. 
 unsigned time_it(const std::function<Integer(unsigned)>& f, unsigned n) {
     clock_t start_time = clock();
     f(n);
     clock_t end_time = clock();
     return static_cast<unsigned>(end_time - start_time); // Return elapsed time
 }
 
 // Tests the performance of the fibonacci and fibonacci2 functions.
 int main() {
     auto t1 = time_it(fibonacci, 50);
     auto t2 = time_it(fibonacci2, 50);
     std::cout << "Time: " << "fibonacci = "<< t1 << " msec, fibonacci2 = " 
               << t2 << " msec\n";
 }

