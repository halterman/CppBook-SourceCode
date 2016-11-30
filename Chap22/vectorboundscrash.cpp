 #include <iostream>
 #include <vector>
 
 int main() {
     std::vector<double> nums { 1.0, 2.0, 3.0 };
     int input;
     std::cout << "Enter an index: ";
     std::cin >> input;
     std::cout << nums.at(input) << '\n';
 }

