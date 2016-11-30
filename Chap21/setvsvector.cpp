 #include <iostream>
 #include <set>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 #include <ctime>
 
 #include "uniformrandom.h"
 
 int main() {
     const int SIZE = 250'000;
     // Make a vector and set 
     std::vector<int> v;
     std::set<int> s;
 
     // Populate the vector and set with the first SIZE integers
     for (int i = 0; i < SIZE; i++)
         v.push_back(i);
     for (int i = 0; i < SIZE; i++)
         s.insert(i);
 
     // Make a vector that contains random numbers in the range
     // stored within the vector and set
     UniformRandomGenerator gen(0, SIZE - 1);
     std::vector<int> search_values;
     for (int i = 0; i < SIZE; i++)
         search_values.push_back(gen());
 
     clock_t start_time, stop_time;
 
     // Search each data structure for the integers 0 to 1,000,000
     start_time = clock();
     for (int i = 0; i < SIZE; i++) {
         int seek = search_values[i];
         std::find(std::begin(v), std::end(v), seek);
     }
     stop_time = clock();
     std::cout << "Vector time: " << stop_time - start_time << '\n';
 
     start_time = clock();
     for (int i = 0; i < SIZE; i++) {
         int seek = search_values[i];
         s.find(seek);
     }
     stop_time = clock();
     std::cout << "Set time: " << stop_time - start_time << '\n';
 }

