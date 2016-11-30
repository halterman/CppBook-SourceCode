 #include <iostream>
 #include <iomanip>
 #include <cmath>

 // Compute an approximation of
 // the square root of x
 double square_root(double x) {
     double diff;
     // Compute a provisional square root
     double root = 1.0;

     do { // Loop until the provisional root
          // is close enough to the actual root
         root = (root + x/root) / 2.0;
         //std::cout << "root is " << root << '\n';
         // How bad is the approximation?
         diff = root * root - x;
     } while (diff > 0.0001 || diff < -0.0001);
     return root;
 }

 int main() {
     // Compare the two ways of computing the square root
     for (double d = 1.0; d <= 10.0; d += 0.5)
         std::cout << std::setw(7) << square_root(d) << " : " << sqrt(d) << '\n'; 
 }

