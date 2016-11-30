 #include <iostream>
 #include <vector>
 #include <array>
 #include <list>
 #include <string>
 
 // Count the elements in a range that match seek.
 // Type Iter is an iterator type working with a container that
 // contains elements of type T.  Type T elements must be 
 // comparable with operator==.
 template <typename Iter, typename T>
 int count_value(Iter iter_begin, Iter iter_end, const T& seek) {
     int cnt = 0;
     for (auto cursor = iter_begin; cursor != iter_end; cursor++) 
         if (*cursor == seek)
             cnt++;
     return cnt;
 }
 
 int main() {
     // Test with a vector of integers
     std::cout << "---Vector of integers--------------\n";
     std::vector<int> a {34, 5, 12, 5, 8, 5, 11, 2};
     std::cout << count_value(std::begin(a), std::end(a), 5) << '\n';
     a = {};  // Try an empty vector
     std::cout << count_value(std::begin(a), std::end(a), 5) << '\n';
     std::cout << count_value(std::begin(a), std::end(a), 8) << '\n';
 
     std::cout << "---STL array of integers-----------\n";
     // Test with a std::array of integers
     std::array<int, 8> arr {34, 5, 12, 5, 8, 5, 11, 2};
     std::cout << count_value(std::begin(arr), std::end(arr), 5) << '\n';
     arr = {};  // Try an empty array
     std::cout << count_value(std::begin(arr), std::end(arr), 5) << '\n';
     std::cout << count_value(std::begin(arr), std::end(arr), 8) << '\n';
 
     std::cout << "---Primitive C array of integers-----\n";
     // Test with a primitive C array of integers
     int carr[] = {34, 5, 12, 5, 8, 5, 11, 2};
     std::cout << count_value(std::begin(carr), std::end(carr), 5) << '\n';
     std::cout << count_value(std::begin(carr), std::end(carr), 8) << '\n';
 
     std::cout << "---Vector of strings---------------\n";
     // Test with a vector of strings
     std::vector<std::string> b {"mae", "al", "pat", "mel", "al",
                                 "ray", "al"};
     std::cout << count_value(std::begin(b), std::end(b), "al") << '\n';
     b = {};
     std::cout << count_value(std::begin(b), std::end(b), "al") << '\n';
     std::cout << count_value(std::begin(b), std::end(b), "pat") << '\n';
 
     std::cout << "---Linked list of strings----------\n";
     // Test with a linked list of strings
     std::list<std::string> lst {"mae", "al", "pat", "mel", "al",
                                 "ray", "al"};
     std::cout << count_value(std::begin(lst), std::end(lst), "al") << '\n';
     lst = {};
     std::cout << count_value(std::begin(lst), std::end(lst), "al") << '\n';
     std::cout << count_value(std::begin(lst), std::end(lst), "pat") << '\n';
 
 
     std::cout << "---Primitive C array of Points-----\n";
     struct Point {
         int x;
         int y;
         bool operator==(const Point& other) {
             return x == other.x && y == other.y;
         }
     };
     // Test with a primitive array of Point objects
     Point pts[] =  {{5, 3}, {0, 0}, {5, 3}, {3, 5}, {2, 1}};
     std::cout << count_value(std::begin(pts), std::end(pts), Point{5, 3}) << '\n';
     std::cout << count_value(std::begin(pts), std::end(pts), Point{3, 5}) << '\n';
     std::cout << count_value(std::begin(pts), std::end(pts), Point{2, 3}) << '\n';
 }

