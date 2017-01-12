 #include <iostream>
 #include <iomanip>
 #include <locale>
 
 // Print the powers of 10 from 1 to 1,000,000,000
 int main() {
     int power = 1;
     std::cout.imbue(std::locale(""));
     while (power <= 1000000000) {
         // Right justify each number in a field 10 wide
         std::cout << std::setw(13) << power << '\n';
         power *= 10;
     }
 }

