 #include <iostream>

 // Definition of the prompt function
 int prompt(int n) {
     int result;
     std::cout << "Please enter integer #" << n << ": ";
     std::cin >> result;
     return result;
 }

 int main() {
     int value1, value2, sum;
     std::cout << "This program adds together two integers.\n";
     value1 = prompt(1);    // Call the function
     value2 = prompt(2);    // Call the function again
     sum = value1 + value2;
     std::cout << value1 << " + " << value2 << " = " << sum << '\n';
 }

