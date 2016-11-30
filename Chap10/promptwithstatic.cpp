 #include <iostream>

 /*
  *  prompt requests an integer from the user and
  *  keeps track of the cumulative number of entries.
  *  Returns the value entered by the user.
  */
 int prompt() {
     static int count = 0;
     int value;
     std::cout << "Please enter integer #" << ++count << ": ";
     std::cin >> value;
     return value;
 }

 int main() {
     int value1, value2, sum;
     std::cout << "This program adds together two integers.\n";
     value1 = prompt();    //  Call the function
     value2 = prompt();    //  Call the function again
     sum = value1 + value2;
     std::cout << value1 << " + " << value2 << " = " << sum << '\n';
 }

