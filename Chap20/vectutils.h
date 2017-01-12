 #include <vector>
 
 namespace vecutils {
 
 // Counts the number of occurrences of the maximum value in 
 // a nonempty vector vec
 int max(const std::vector<int>& vec);
 
 // Returns true if all the elements in vector vec appear 
 // in nondecreasing order; otherwise, returns false.
 bool is_sorted(const std::vector<int>& vec);
 
 } // End vecutils namespace

