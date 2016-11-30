 #include <iostream>

 int main() {
     int value;
     std::cout << "Please enter an integer value in the range 0...10: ";
     std::cin >> value;
     if (value >= 0)   //  First check
         if (value <= 10)   //  Second check
             std::cout << "In range"; 
     std::cout << "Done\n";
 }

