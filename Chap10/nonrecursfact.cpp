 #include <iostream>

 /*
  *  factorial(n)
  *     Computes n!
  *     Returns the factorial of n.
  */
 int factorial(int n) {
     int product = 1;
     for (int i = n;  i > 0;  i--)
         product *= i;
     return product;
 }

 int main() {
     //  Try out the factorial function
     std::cout << " 0! = " << factorial(0) << '\n';
     std::cout << " 1! = " << factorial(1) << '\n';
     std::cout << " 6! = " << factorial(6) << '\n';
     std::cout << "10! = " << factorial(10) << '\n';
 }

