 #include <iostream>

 // Definition of the prompt function
 void prompt() {
     std::cout << "Please enter an integer value: ";
 }

 int main() {
     int value1, value2, sum;
     std::cout << "This program adds together two integers.\n";
     prompt();    // Call the function
     std::cin >> value1;
     prompt();    // Call the function again
     std::cin >> value2;
     sum = value1 + value2;
     std::cout << value1 << " + " << value2 << " = " << sum << '\n';
 }

