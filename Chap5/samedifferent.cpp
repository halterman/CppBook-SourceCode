 #include <iostream>
 #include <iomanip>
 
 int main() {
     double d1 = 1.11 - 1.10,
            d2 = 2.11 - 2.10;
     std::cout << "d1 = " << d1 << '\n';
     std::cout << "d2 = " << d2 << '\n';
     if (d1 == d2)
         std::cout << "Same\n";
     else
         std::cout << "Different\n";
     std::cout << "d1 = " << std::setprecision(20) << d1 << '\n';
     std::cout << "d2 = " << std::setprecision(20) << d2 << '\n';
 }

