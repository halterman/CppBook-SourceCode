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

 // Returns the product of two rational numbers
 SimpleRational multiply(SimpleRational  f1, SimpleRational f2) {
     return {f1.get_numerator() * f2.get_numerator(),
             f1.get_denominator() * f2.get_denominator()};
 }

 void print_fraction(SimpleRational f) {
     std::cout << f.get_numerator() << "/" << f.get_denominator();
 }

 int main() {
     SimpleRational fract(1, 2);  // The fraction 1/2
     std::cout << "The fraction is "; 
     print_fraction(fract);
     std::cout << '\n';
     fract.set_numerator(19);
     fract.set_denominator(4);
     std::cout << "The fraction now is ";
     print_fraction(fract);
     std::cout << '\n';

     // Alternate syntax uses {} with constructor instead of ()
     SimpleRational fract1{1, 2}, fract2{2, 3};
     auto prod = multiply(fract1, fract2);
     std::cout << "The product of ";
     print_fraction(fract1);
     std::cout << " and ";
     print_fraction(fract2);
     std::cout << " is ";
     print_fraction(prod);
     std::cout << '\n';
 }

