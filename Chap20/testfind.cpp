 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <numeric>
 
 int main() {
     // Make a vector of 1,000 integers 
     std::vector<int> seq(1000, 0);
     // Populate the vector with 0, 1, 2, 3, ..., 999
     std::iota(std::begin(seq), std::end(seq), 0);
 
     // Look for 678
     auto iter = std::find(std::begin(seq), std::end(seq), 678);
     // Do we find it?
     if (iter != std::end(seq))
         std::cout << *iter << " is present" << '\n';
     else
         std::cout << "678 is NOT present" << '\n';
 
     // Look for -200
     iter = std::find(std::begin(seq), std::end(seq), -200);
     // Do we find it?
     if (iter != std::end(seq))
         std::cout << *iter << " is present" << '\n';
     else
         std::cout << "-200 is NOT present" << '\n';
 }

