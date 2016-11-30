 #include <iostream>
 
 class Rational {
     int numerator;
     int denominator;
 
     //  Compute the greatest common divisor (GCD) of two integers
     static int gcd(int m, int n) {
         if (n == 0) 
             return m;
         else
             return gcd(n, m % n);
     }
     //  Compute the least common multiple (LCM) of two integers
     static int lcm(int m, int n) {
         return m * n /gcd(m, n);
     }
 
 public:
     Rational(int n, int d): numerator(n), denominator(d) {
         if (d == 0) {   //  Disallow an undefined fraction
             std::cout << "*****Warning---Illegal Rational\n";
             numerator = 0;    //  Make up a reasonable default fraction
             denominator = 1;
         }
     }
 
     //  Default fraction is 0/1
     Rational(): numerator(0), denominator(1) {}
 
     int get_numerator() const {
         return numerator;
     }
 
     int get_denominator() const {
         return denominator;
     }
 
     Rational reduce() const {
         //  Find the factor that numerator and denominator have in common . . .
         int factor = gcd(numerator, denominator);
         //  . . . then divide it out in the new fraction
         return Rational(numerator/factor, denominator/factor);
     }
 
     //  Equal fractions have identical numerators and denominators
     bool operator==(const Rational& fract) const {
         //  First, find the reduced form of this fraction and the parameter . . .
         Rational f1 = reduce(),
                  f2 = fract.reduce();
         //  . . . then see if their components match.
         return (f1.numerator == f2.numerator)
                && (f1.denominator == f2.denominator);
     }
 
     //  Compute the sum of fract and the current rational number
     Rational operator+(const Rational& fract) const {
         //  Find common denominator
         int commonDenominator = lcm(denominator, fract.denominator);
         //  Add the adjusted numerators
         int newNumerator = numerator * commonDenominator/denominator
                        + fract.numerator * commonDenominator/fract.denominator;
         return Rational(newNumerator, commonDenominator);
     }
 
     //  Compute the product of fract and the current rational number
     Rational operator*(const Rational& fract) const {
         return Rational(numerator * fract.numerator,
                         denominator * fract.denominator).reduce();
     }
 };

//  Allow a Rational object to be displayed in a nice
//  human-readable form.
std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.get_numerator() << "/" << r.get_denominator();
    return os;
}

int main() {
    Rational f1(1, 2), f2(1, 3);
    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << '\n';
    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << '\n';
}

