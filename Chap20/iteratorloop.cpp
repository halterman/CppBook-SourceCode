 #include <iostream>
 #include <vector>

 int main() {
     // Make a simple integer vector
     std::vector<int> vec {10, 20, 30, 40, 50};
     // Print the contents of the vector
     for (auto iter = std::begin(vec); iter != std::end(vec); iter++) 
         std::cout << *iter << ' ';
     std::cout << '\n';
 }

