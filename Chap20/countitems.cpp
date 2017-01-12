 #include <iostream>
 #include <vector>
 
 using Iter = std::vector<int>::iterator;
 
 // Count the elements in a vector of integers that match seek
 int count_value(Iter iter_begin, Iter iter_end, int seek) {
     int cnt = 0;
     for (Iter cursor = iter_begin; cursor != iter_end; cursor++) 
         if (*cursor == seek)
             cnt++;
     return cnt;
 }
 
 int main() {
     std::vector<int> a {34, 5, 12, 5, 8, 5, 11, 2};
     // Count multiple elements
     std::cout << count_value(std::begin(a), std::end(a), 5) << '\n';
     // Count single element
     std::cout << count_value(std::begin(a), std::end(a), 12) << '\n';
     // Count missing element
     std::cout << count_value(std::begin(a), std::end(a), 13) << '\n';
     a = {};  // Try an empty vector
     std::cout << count_value(std::begin(a), std::end(a), 5) << '\n';
 }

