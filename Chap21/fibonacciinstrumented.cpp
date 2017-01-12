 #include <iostream>
 #include <map>
 
 // This associative container will keep track of the number of 
 // calls to the fibonacci function.
 std::map<int, int> call_counter;
 
 // Returns the nth Fibonacci number
 int fibonacci(int n) {
     // Count the call
     call_counter[n]++;
 
     if (n <= 0)
         return 0;
     else if (n == 1)
         return 1;
     else
         return fibonacci(n - 2) + fibonacci(n - 1);
 }
 
 int main() {
     // Call fibonacci(5)
     std::cout << "fibonacci(5) = " << fibonacci(5) << "\n\n";
     
     // Report the total number of calls to the fibonacci function
     std::cout << "Argument    Calls" << '\n';
     std::cout << "-----------------\n";
     for (auto& counts: call_counter)
         std::cout << "   " << counts.first << "         " 
                   << counts.second << '\n';
 }

