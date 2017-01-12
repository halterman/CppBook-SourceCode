 #include <unordered_map>
 #include "fibonacci.h"
 
 // Returns the nth Fibonacci number
 Integer fibonacci(unsigned n) {
     if (n <= 0)
         return 0;
     else if (n == 1)
         return 1;
     else
         return fibonacci(n - 2) + fibonacci(n - 1);
 }
 
 
 // Returns the nth Fibonacci number.  Caches a
 // recursively computed result to be used when needed
 // in the future.  Provides a huge performance improvement
 // over the recursive version. 
 Integer fibonacci2(unsigned n) {
     // ans is a map for caching the results of the fibonacci2 function.
     // Declared static so it persists between function calls.
     // Precomputes the results for 0 and 1.
     static std::unordered_map<unsigned, Integer> ans {{0, 0}, {1, 1}};
     if (n > 1 && ans[n] == 0)
         ans[n] = fibonacci2(n - 2) + fibonacci2(n - 1);
     return ans[n];
 }

