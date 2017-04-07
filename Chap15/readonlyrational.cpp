 #include <iostream>
 #include <cstdlib>
 
 // Models a mathematical rational number
 class ReadOnlyRational {
     int numerator;
     int denominator;
 public:
     // Initializes the components of a ReadOnlyRational object
     ReadOnlyRational(int n, int d): numerator(n), denominator(d) {
         if (d == 0) {
             // Display error message
             std::cout << "Zero denominator error\n";
             exit(1);   // Exit the program
         }
     }
 
     // The default constructor makes a zero rational number
     // 0/1
     ReadOnlyRational(): ReadOnlyRational(0, 1) {}
 
     // Allows a client to see the numerator's value.
     int get_numerator() const {
         return numerator;
     }
 
     // Allows a client to see the denominator's value.
     int get_denominator() const {
         return denominator;
     }
 };

 // This operator sends a fraction object to the output stream in
 // a human-readable form.
 std::ostream& operator<<(std::ostream& os, const ReadOnlyRational& f) {
     os << f.get_numerator() << '/' << f.get_denominator();
     return os;
 }

 int main() {
     ReadOnlyRational fract{1, 2};  // The fraction 1/2
     std::cout << "The fraction is " << fract << '\n';
     ReadOnlyRational fract2{2, 3};  // The fraction 2/3
     std::cout << "The fraction is " << fract2 << '\n';
 }

