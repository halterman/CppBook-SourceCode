 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 #include <random>
 
 // Uniform pseudorandom number generator from an earlier chapter
 #include "uniformrandom.h"
 
 int main() {
     std::vector<int> nums1(15),
                      nums2(13);
 
     UniformRandomGenerator gen1(0, 40),
                            gen2(0, 40);
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Populate the vectors with pseudorandom
     // integers in the range 0, 1, ..., 50
     std::generate(std::begin(nums1), std::end(nums1), gen1);
     std::generate(std::begin(nums2), std::end(nums2), gen2);
 
     std::cout << "Original sequences" << '\n';
     std::copy(std::begin(nums1), std::end(nums1), output);
     std::cout << '\n';
     std::cout << "-----------------\n";
     std::copy(std::begin(nums2), std::end(nums2), output);
     std::cout << '\n';
     std::cout << "=================\n\n";
 
     std::sort(std::begin(nums1), std::end(nums1));
     std::sort(std::begin(nums2), std::end(nums2));
     std::cout << "Sorted sequences" << '\n';
     std::copy(std::begin(nums1), std::end(nums1), output);
     std::cout << '\n';
     std::cout << "-----------------\n";
     std::copy(std::begin(nums2), std::end(nums2), output);
     std::cout << '\n';
     std::cout << "=================\n\n";
 
     // Merge the sequences
     std::vector<int> merged(nums1.size() + nums2.size());
     std::merge(std::begin(nums1), std::end(nums1), 
                std::begin(nums2), std::end(nums2),
                std::begin(merged));
     std::cout << "Merged sequence\n";
     std::copy(std::begin(merged), std::end(merged), output);
     std::cout << '\n';
 }

