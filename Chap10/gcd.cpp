 #include <iostream>

 /*
  *  gcd(m, n)
  *     Uses Euclid's method to compute
  *     the greatest common divisor 
  *     (also called greatest common 
  *     factor) of  m and n.
  *     Returns the GCD of m and n.
  */
 int gcd(int m, int n) {
     if (n == 0)
         return m;
     else
        return gcd(n, m % n);
 }

 int iterative_gcd(int num1, int num2) {
     // Determine the smaller of num1 and num2
     int min = (num1 < num2) ? num1 : num2;
     // 1 is definitely a common factor to all ints
     int largestFactor = 1;  
     for (int i = 1;  i <= min;  i++) 
         if (num1 % i == 0 && num2 % i == 0) 
             largestFactor = i; // Found larger factor
     return largestFactor;
 }

 int main() {
     // Try out the gcd function
     for (int num1 = 1; num1 <= 100; num1++)
         for (int num2 = 1; num2 <= 100; num2++)
                 std::cout << "gcd(" << num1 << "," << num2 
                           << ") = " << gcd(num1, num2) << '\n';
 }

