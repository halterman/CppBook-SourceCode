 #include <iostream>
 #include <vector>
 
 int main() {
     std::vector<double> nums { 1.0, 2.0, 3.0 };
     int input;
     while (true) {
         std::cout << "Enter an index: ";
         std::cin >> input;
         try {
             std::cout << nums.at(input) << '\n';
             break;  // Printed successfully, so break out of loop
         }
         catch (std::exception&) {
             std::cout << "Index is out of range.  Please try again.\n";
         }
     }
 }

