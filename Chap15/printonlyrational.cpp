 #include <iostream>
 #include <cstdlib>
 
 // Models a mathematical rational number
 class PrintOnlyRational {
     int numerator;
     int denominator;
 public:
     // Initializes the components of an PrintOnlyRational object
     PrintOnlyRational(int n, int d): numerator(n), denominator(d) {
         if (d == 0) {
             // Display error message
             std::cout << "Zero denominator error\n";
             exit(1);   // Exit the program
         }
     }
 
     // The default constructor makes a zero rational number
     // 0/1
     PrintOnlyRational(): PrintOnlyRational(0, 1) {}
 
     // This operator can access the internal details of an
     // object of this class.
     friend std::ostream& operator<<(std::ostream& os, 
                                     const PrintOnlyRational& f);
 };

 std::ostream& operator<<(std::ostream& os, const PrintOnlyRational& f) {
     os << f.numerator << '/' << f.denominator;
     return os;
 }
 
 int main() {
     PrintOnlyRational fract{1, 2};  // The fraction 1/2
     std::cout << "The fraction is " << fract << '\n';
     PrintOnlyRational fract2{2, 3};  // The fraction 2/3
     std::cout << "The fraction is " << fract2 << '\n';
 }

