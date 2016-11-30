 #include <iostream>
 #include <cmath>
 
 //  Consider two floating-point numbers equal when
 //  the difference between them is very small.
 bool equals(double a, double b, double tolerance) {
     return a == b || fabs(a - b) < tolerance;
 }
 
 double square_root(double x) {
     //  Compute a provisional square root
     double root = 1.0;
 
     do {  //  Loop until the provisional root
           //  is close enough to the actual root
         root = (root + x/root) / 2.0;
     }
     while (!equals(root*root, x, 0.0001));
     return root;
 }
 
 int main() {
     for (double d = 0.0; d < 100000.0; d += 0.0001) {
         if (!equals(square_root(d), sqrt(d), 0.001))
             std::cout << d << ": Expected " << sqrt(d) << ", but computed "
                  << square_root(d) << '\n';
     }
 }

