 #include <iostream>

 int main() {
     int input, sum = 0;
     std::cout << "Enter numbers to sum, type 'q' to end the list:";
     while (std::cin >> input) 
         sum += input;
     std::cout << "Sum = " << sum << '\n';
 }

