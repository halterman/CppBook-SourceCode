 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 #include <random>
 
 // Uniform pseudorandom number generator from an earlier chapter
 #include "uniformrandom.h"
 
 int main() {
     std::vector<int> nums(20);
 
     UniformRandomGenerator gen(0, 100);
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // First, populate the vector with the value 2
     std::generate(std::begin(nums), std::end(nums), [](){ return 2;});
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Next, populate the vector with a formulaic sequence
     int i = 10;
     std::generate(std::begin(nums), std::end(nums), 
                   [&i](){ 
                       int result = i;
                       if (i % 10 == 0)
                           i += 5;
                       else
                           i++;
                       return result; 
                   });
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 
     // Finally, populate the vector with pseudorandom
     // integers in the range 0, 1, ..., 100
     std::generate(std::begin(nums), std::end(nums), gen);
     std::copy(std::begin(nums), std::end(nums), output);
     std::cout << '\n';
 }

