 #include <iostream>
 #include <cstdlib>
 
 // Models a mathematical rational number
 class SimpleRational {
     int numerator;
     int denominator;
 public:
     // Initializes the components of a Rational object
     SimpleRational(int n, int d): numerator(n), denominator(d) {
         if (d == 0) {
             // Display error message
             std::cout << "Zero denominator error\n";
             exit(1);   // Exit the program
         }
     }
 
     // The default constructor makes a zero rational number
     // 0/1
     SimpleRational(): numerator(0), denominator(1) {}
 
     // Allows a client to reassign the numerator
     void set_numerator(int n) {
         numerator = n;
     }
 
     // Allows a client to reassign the denominator.
     // Disallows an illegal fraction (zero denominator).
     void set_denominator(int d) {
         if (d != 0)
             denominator = d;
         else {
             // Display error message
             std::cout << "Zero denominator error\n";
             exit(1);   // Exit the program
         }
     }
 
     // Allows a client to see the numerator's value.
     int get_numerator() {
         return numerator;
     }
 
     // Allows a client to see the denominator's value.
     int get_denominator() {
         return denominator;
     }
 };

 int main() {
     SimpleRational fract(1, 2);  // The fraction 1/2
     std::cout << "The fraction is " << fract.get_numerator()
               << "/" << fract.get_denominator() << '\n';
     fract.set_numerator(19);
     fract.set_denominator(4);
     std::cout << "The fraction is " << fract.get_numerator()
               << "/" << fract.get_denominator() << '\n';
 }

