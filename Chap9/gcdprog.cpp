 #include <iostream>
 
 int main() {
     //  Prompt user for input
     int num1, num2;
     std::cout << "Please enter two integers: ";
     std::cin >> num1 >> num2;
 
     //  Determine the smaller of num1 and num2
     int min = (num1 < num2) ? num1 : num2;
 
     //  1 is definitely a common factor to all ints
     int largestFactor = 1;  
     for (int i = 1;  i <= min;  i++) 
         if (num1 % i == 0 && num2 % i == 0) 
            largestFactor = i; // Found larger factor
     std::cout <<  largestFactor << '\n';
 }

