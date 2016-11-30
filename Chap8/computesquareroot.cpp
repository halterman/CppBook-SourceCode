 //  File squareroot.cpp
 
 #include <iostream>
 
 int main() {
     double input;
 
     //  Get value from the user
     std::cout << "Enter number: ";
     std::cin >> input;
     double diff;
     //  Compute a provisional square root
     double root = 1.0;
 
     do {  //  Loop until the provisional root
           //  is close enough to the actual root
         root = (root + input/root) / 2.0;
         std::cout << "root is " << root << '\n';
         //  How bad is the approximation?
         diff = root * root - input;
     }
     while (diff > 0.0001 || diff < -0.0001);
 
     //  Report approximate square root
     std::cout << "Square root of " << input << " = " << root << '\n';
 }

