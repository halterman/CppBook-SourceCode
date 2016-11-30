 #include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 #include <iterator>
 #include <random>
 
 // Uniform pseudorandom number generator from an earlier chapter
 #include "uniformrandom.h"
 
 int main() {
     std::vector<int> nums(25);
 
     UniformRandomGenerator gen(0, 100);
 
     auto int_output = std::ostream_iterator<int>(std::cout, " ");
 
     // Populate the vector with pseudorandom
     // integers in the range 0, 1, ..., 100
     std::generate(std::begin(nums), std::end(nums), gen);
 
     std::cout << "Original sequence" << '\n';
     std::copy(std::begin(nums), std::end(nums), int_output);
     std::cout << '\n';
     std::cout << "-----------------" << '\n';
     std::cout << "Partitioned sequence" << '\n';
     std::partition(std::begin(nums), std::end(nums), 
                    [](int n) { return n % 2 == 0; });
     std::copy(std::begin(nums), std::end(nums), int_output);
     std::cout << '\n';
     std::cout << "=================\n\n";
 
     auto string_output = std::ostream_iterator<std::string>(std::cout, " ");
     std::vector<std::string> words { "fred", "ella", "adam", "jo",
                                      "pat", "mel", "anna", "ed",
                                      "oscar", "will", "tom", "ingrid" };
     std::cout << "Original sequence" << '\n';
     std::copy(std::begin(words), std::end(words), string_output);
     std::cout << '\n';
     std::cout << "-----------------\n";
     std::cout << "Partitioned sequence" << '\n';
     std::partition(std::begin(words), std::end(words), 
                    [](const std::string& w ) { return w.length() > 3; });
     std::copy(std::begin(words), std::end(words), string_output);
     std::cout << '\n';
 }

