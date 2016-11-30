 #include <iostream>
 
 int main() {
     int value;
     //  Get number from the user
     std::cout << "Please enter an integer value in the range 0...1023: ";
     std::cin >> value;
     //  Integer must be less than 1024
     if (0 <= value &&  value < 1024)  {
         std::cout << value/512;
         value %= 512;
         std::cout << value/256;
         value %= 256;
         std::cout << value/128;
         value %= 128;
         std::cout << value/64;
         value %= 64;
         std::cout << value/32;
         value %= 32;
         std::cout << value/16;
         value %= 16;
         std::cout << value/8;
         value %= 8;
         std::cout << value/4;
         value %= 4;
         std::cout << value/2;
         value %= 2;
         std::cout << value << '\n';
     }
 }

