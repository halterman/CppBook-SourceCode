 #include <iostream>

 int main() {
     int input, sum = 0;
     std::cout << "Enter numbers to sum, negative number ends list:";
     while (true) { 
         std::cin >> input;
         if (input < 0)
             break;       // Exit loop immediately
         sum += input;
     }
     std::cout << "Sum = " << sum << '\n';
 }

