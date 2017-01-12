// File complex.cpp
 #include <iostream>
 #include <complex>
 
 int main() {
     // c1 = 2 + 3i, c2 = 2 - 3i; c1 and c2 are complex conjugates
     std::complex<double> c1(2.0, 3.0), c2(2.0, -3.0);
 
     // Compute product "by hand"
     double real1 = c1.real(),
            imag1 = c1.imag(),
            real2 = c2.real(),
            imag2 = c2.imag();
     std::cout << c1 << " * " << c2 << " = " 
               << real1*real2 + imag1*real2 + real1*imag2 - imag1*imag2
               << '\n';
 
     // Use complex arithmetic
     std::cout << c1 << " * " << c2 << " = " << c1*c2 << '\n';
 }

