 // File faultytempconv.cpp
 
 #include <iostream>
 
 int main() {
     double degreesF = 0, degreesC = 0;
     // Define the relationship between F and C
     degreesC = 5.0/9*(degreesF - 32);
     // Prompt user for degrees F
     std::cout << "Enter the temperature in degrees F: ";
     // Read in the user's input
     std::cin >> degreesF;
     // Report the result
     std::cout << degreesC << '\n';
 }

