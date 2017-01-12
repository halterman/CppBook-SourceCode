 #include <iostream>
 #include <limits>
 
 int main() {
     int x;
     // I hope the user does the right thing!
     std::cout << "Please enter an integer: ";
     // Enter and remain in the loop as long as the user provides
     // bad input
     while (!(std::cin >> x)) {
         // Report error and re-prompt
         std::cout << "Bad entry, please try again: ";
         // Clean up the input stream
         std::cin.clear();  // Clear the error state of the stream
         // Empty the keyboard buffer
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
     }
     std::cout << "You entered " << x << '\n';
 }

