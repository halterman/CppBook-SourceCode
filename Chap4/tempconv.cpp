 // File tempconv.cpp
 
 #include <iostream>
 
 int main() {
     double degreesF, degreesC;
     // Prompt user for temperature to convert
     std::cout << "Enter the temperature in degrees F: ";
     // Read in the user's input
     std::cin >> degreesF;
     // Perform the conversion
     degreesC = 5/9*(degreesF - 32);
     // Report the result
     std::cout << degreesC << '\n';
 }

