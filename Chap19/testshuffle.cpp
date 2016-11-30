 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <numeric>
 #include <iterator>
 #include <random>
 
 int main() {
     std::vector<int> vec(20);
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Sequence is 0, 1, 2, ..., 19
     std::iota(std::begin(vec), std::end(vec), 0);
 
     // Confirm original order
     std::copy(std::begin(vec), std::end(vec), output);
     std::cout << '\n';
  
     std::random_device dev;
     std::mt19937 generator(dev());
  
     // Permute the vector
     std::shuffle(std::begin(vec), std::end(vec), generator);
  
     // Confirm the permutation
     std::copy(std::begin(vec), std::end(vec), output);
     std::cout << '\n';
 }

