 #include <iostream>
 
 int main() {
     int value;
     //  Get number from the user
     std::cout << "Please enter an integer value in the range 0...1023: ";
     std::cin >> value;
     //  Integer must be less than 1024
     if (0 <= value &&  value < 1024)  {
         if (value >= 512)  {  
             std::cout << 1;
             value %= 512;
         } 
         else 
             std::cout << 0;
         if (value >= 256)  {
             std::cout << 1;
             value %= 256;
         } 
         else
             std::cout << 0;
         if (value >= 128)  {
             std::cout << 1;
             value %= 128;
         } 
         else
             std::cout << 0;
         if (value >= 64)  {
             std::cout << 1;
             value %= 64;
         } 
         else
             std::cout << 0;
         if (value >= 32)  {
             std::cout << 1;
             value %= 32;
         } else
             std::cout << 0;
         if (value >= 16)  {
             std::cout << 1;
             value %= 16;
         } 
         else
             std::cout << 0;
         if (value >= 8)  {
             std::cout << 1;
             value %= 8;
         } 
         else
             std::cout << 0;
         if (value >= 4)  {
             std::cout << 1;
             value %= 4;
         } 
         else
             std::cout << 0;
         if (value >= 2)  {
             std::cout << 1;
             value %= 2;
         } 
         else
             std::cout << 0;
         std::cout << value << '\n';
     }
 }

