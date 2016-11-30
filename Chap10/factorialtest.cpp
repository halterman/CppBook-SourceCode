 #include <iostream>

 /*
  *  factorial(n)
  *     Computes n!
  *     Returns the factorial of n.
  */
 int factorial(int n) {
     if (n == 0)
         return 1;
     else
         return n * factorial(n - 1);
 }

 int main() {
     //  Try out the factorial function
     std::cout << " 0! = " << factorial(0) << '\n';
     std::cout << " 1! = " << factorial(1) << '\n';
     std::cout << " 6! = " << factorial(6) << '\n';
     std::cout << "10! = " << factorial(10) << '\n';
 }

