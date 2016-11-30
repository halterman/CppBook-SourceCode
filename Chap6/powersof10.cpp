 #include <iostream>
 
 int main() {
     int power = 1;
     while (power <= 1000000000) {
         std::cout << power << '\n';
         power *= 10;
     }
 }

