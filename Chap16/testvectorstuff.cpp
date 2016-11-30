 #include <iostream>
 #include <vector>
 #include "tester.h"
 
 //  sort has a bug (it does not do anyting)
 void sort(std::vector<int>& vec) {
     //  Not yet implemented
 }
 
 //  sum has a bug (misses first element)
 int sum(const std::vector<int>& vec) {
     int total = 0;
     for (size_t i = 1; i < vec.size(); i++)
         total += vec[i];
     return total;
 }
 
 int main() {
     Tester t;  //  Declare a test object
     //  Some test cases to test sort
     std::vector<int> vec { 4, 2, 3 };
     sort(vec);
     t.check_equals("Sort test #1", {2, 3, 4}, vec);
     vec = {2, 3, 4};
     sort(vec);
     t.check_equals("Sort test #2", {2, 3, 4}, vec);
     //  Some test cases to test sum
     t.check_equals("Sum test #1", sum({0, 3, 4}), 7);
     t.check_equals("Sum test #2", sum({-3, 0, 5}), 2);
 }

