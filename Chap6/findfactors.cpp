 #include <iostream>

 int main() {
     // List of the factors of the numbers up to 20
     int n = 1;
     const int MAX = 20;
     while (n <= MAX) {
         int factor = 1;
         std::cout << n << ": ";
         while (factor <= n)
             if (n % factor == 0) {
                 std::cout << factor << " ";
                 factor++;
             }
         std::cout << '\n';  // Go to next line for next n
         n++;
     }
 }

