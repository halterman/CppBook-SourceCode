 #include <iostream>
 #include <vector>
 #include <iterator>
 
 int main() {
     std::vector<int> vec { 10, 20, 30, 35, 40, 45, 50, 55 };
 
     // Copy the contents of the container to std::cout, separating 
     // elements with a single space
     auto strm = std::ostream_iterator<int>(std::cout, " ");
 
     std::copy(std::begin(vec), std::end(vec), strm);
     std::cout << '\n';
 }

