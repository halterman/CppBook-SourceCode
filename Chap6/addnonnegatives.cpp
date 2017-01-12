 /*
  *  Allow the user to enter a sequence of nonnegative
  *  integers.  The user ends the list with a negative
  *  integer.  At the end the sum of the nonnegative 
  *  integers entered is displayed.  The program prints 
  *  zero if the users no nonnegative integers.
  */

 #include <iostream>

 int main() {
     int input = 0,   // Ensure the loop is entered
         sum = 0;     // Initialize sum
     
     // Request input from the user
     std::cout << "Enter numbers to sum, negative number ends list:";

     while (input >= 0) {    // A negative number exits the loop 
         std::cin >> input;  // Get the value
         if (input >= 0) 
             sum += input;   // Only add it if it is nonnegative
     }
     std::cout << "Sum = " << sum << '\n';  // Display the sum
 }

