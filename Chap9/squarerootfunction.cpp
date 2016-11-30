 #include <iostream>
 
 double square_root(double x) {
     double diff;
     //  Compute a provisional square root
     double root = 1.0;
 
     do {  //  Loop until the provisional root
           //  is close enough to the actual root
         root = (root + x/root) / 2.0;
         std::cout << "root is " << root << '\n';
         //  How bad is the approximation?
         diff = root * root - x;
     }
     while (diff > 0.0001 || diff < -0.0001);
     return root;
 }
 
 int main() {
     double input;
 
     //  Get value from the user
     std::cout << "Enter number: ";
     std::cin >> input;
     //  Report square root
     std::cout << "Square root of " << input << " = " 
          << square_root(input) << '\n';
 }

