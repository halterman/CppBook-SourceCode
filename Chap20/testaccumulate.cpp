 #include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 #include <numeric>
 #include <iterator>
 #include <random>
 
 // Uniform pseudorandom number generator from an earlier chapter
 #include "uniformrandom.h"
 
 int main() {
     std::vector<int> nums(6);
 
     UniformRandomGenerator gen(1, 5);
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Populate the vector with pseudorandom
     // integers in the range 0, 1, ..., 10
     std::generate(std::begin(nums), std::end(nums), gen);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Add up the elements
     std::cout << std::accumulate(std::begin(nums), std::end(nums), 0,
                        [](int a, int b) { return a + b; })
               << '\n';
 
     // Multiply the elements
     std::cout << std::accumulate(std::begin(nums), std::end(nums), 1,
                        [](int a, int b) { return a * b; })
               << '\n';
 }

