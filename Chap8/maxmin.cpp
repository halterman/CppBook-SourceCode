 #include <iostream>
 #include <algorithm>

 int main() {
     int value1, value2;
     std::cout << "Please enter two integer values: ";
     std::cin >> value1 >> value2;
     std::cout << "max = " << std::max(value1, value2) 
          << ", min = " << std::min(value1, value2) << '\n';
 }

