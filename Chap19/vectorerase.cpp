 #include <iostream>
 #include <vector>
 #include <iterator>
 
 int main() {
     std::vector<int> nums {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Print the vector
     copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Delete elements from index 3 to index 7
     nums.erase(std::begin(nums) + 3, std::begin(nums) + 8);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 }

