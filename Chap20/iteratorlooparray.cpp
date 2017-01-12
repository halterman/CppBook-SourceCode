 #include <iostream>
 #include <vector>

 int main() {
     // Make a static integer array
     int arr[] =  {10, 20, 30, 40, 50};
     // Print the contents of the array
     for (auto iter = std::begin(arr); iter != std::end(arr); iter++) 
         std::cout << *iter << ' ';
     std::cout << '\n';
 }

