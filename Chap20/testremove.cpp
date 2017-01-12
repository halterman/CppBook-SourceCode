 #include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 #include <numeric>
 #include <iterator>
 
 bool is_even(int n) {
     return n % 2 == 0;
 }
 
 int main() {
     std::vector<int> nums(20);
     std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Fill the vector with 0, 1, ..., 19
     std::iota(std::begin(nums), std::end(nums), 0);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Remove 10
     nums.erase(std::remove(std::begin(nums), std::end(nums), 10),
                std::end(nums));
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Remove remaining even numbers
     nums.erase(std::remove_if(std::begin(nums), std::end(nums), is_even),
                std::end(nums));
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 }

