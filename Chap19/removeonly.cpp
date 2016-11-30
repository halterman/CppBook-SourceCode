 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <numeric>
 #include <iterator>
 
 bool is_even(int n) {
     return n % 2 == 0;
 }
 
 int main() {
     std::vector<int> nums(20);
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Fill the vector with 0, 1, ..., 19
     std::iota(std::begin(nums), std::end(nums), 0);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Remove 10
     std::remove(std::begin(nums), std::end(nums), 10);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Remove remaining even numbers
     std::remove_if(std::begin(nums), std::end(nums), is_even);
     copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 }

