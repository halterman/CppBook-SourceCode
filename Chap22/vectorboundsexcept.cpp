 #include <iostream>
 #include <vector>
 
 int main() {
     std::vector<double> nums { 1.0, 2.0, 3.0 };
     int input;
     std::cout << "Enter an index: ";
     std::cin >> input;
     try {
         std::cout << nums.at(input) << '\n';
     }
     catch (std::exception& e) {
         std::cout << e.what() << '\n';
     }
 }

