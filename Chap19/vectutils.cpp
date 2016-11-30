 #include "vectutils.h"
 
 namespace vecutils {
 // Counts the number of occurrences of the maximum value in 
 // a nonempty vector vec
 int max(const vector<int>& vec) {
     auto p = std::begin(vec);  // p points to the first element
     // Determine maximum value
     int m = *p++;         // Set m to the first element and move p
     while (p != std::end(vec)) {
         if (*p > m)
             m = *p;       // Found a reason to update m
         p++;
     }
     // Count the number of times the maximum appears
     int count = 0;
     for (auto elem : vec) 
         if (elem == m)
             count++;
     return count;
 }

 // Returns true if all the elements in vector vec appear 
 // in nondecreasing order; otherwise, returns false.
 bool is_sorted(const std::vector<int>& vec) {
     for (unsigned i = 0; i < vec.size() - 1; i++) 
         if (vec[i] > vec[i + 1]) 
             return false;  // Found elements out of order
     return true;
 }
 
 } // End vecutils namespace

