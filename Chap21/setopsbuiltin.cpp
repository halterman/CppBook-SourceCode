 #include <iostream>
 #include <set>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 
 #include "setoutput.h"
 
 
 int main() {
     // Compute the intersection and union of two sets
     std::set<int> s1{1, 2, 3, 4, 5, 6};
     std::set<int> s2{2, 5, 7, 9, 10};
     std::set<int> s1_inter_s2;
  
     std::set_intersection(std::begin(s1), std::end(s1),
                           std::begin(s2), std::end(s2),
                           std::inserter(s1_inter_s2, std::end(s1_inter_s2)));
     std::cout << "Intersection of " << s1 << " and " << s2 
               << " = " << s1_inter_s2 << '\n';
 
     std::cout << "\n-------------\n";
 
     std::set<int> s1_union_s2;
     std::set_union(std::begin(s1), std::end(s1), 
                    std::begin(s2), std::end(s2),
                    std::inserter(s1_union_s2, std::end(s1_union_s2)));
     std::cout << "Union of " << s1 << " and " << s2 
               << " = " << s1_union_s2 << '\n';
 
     std::cout << "\n-------------\n";
 
     std::vector<int> v1{1, 2, 3, 4, 5, 6};
     std::vector<int> v2{2, 5, 7, 9, 10};
     // Note: v1 and v2 both must be sorted for this to work
     // Since we created them sorted the next two statements are not
     // technically necessary, but we include them here to emphasize
     // the fact that the vectors must be sorted to compute their 
     // intersection and union in this manner.  Sets are inherently
     // sorted, and so need no such preprocessing.
     sort(std::begin(v1), std::end(v1));
     sort(std::begin(v2), std::end(v2));
     std::vector<int> v1_intersection_v2;
     std::vector<int> v1_union_v2;
     std::set_intersection(std::begin(v1), std::end(v1),
                           std::begin(v2), std::end(v2),
                           std::back_inserter(v1_intersection_v2));
     std::set_union(std::begin(v1), std::end(v1), 
                    std::begin(v2), std::end(v2),
                    std::back_inserter(v1_union_v2));
     for (auto elem : v1_intersection_v2) 
         std::cout << elem << ' ';
     std::cout << '\n';
     for (auto elem : v1_union_v2) 
         std::cout << elem << ' ';
     std::cout << '\n';
 }

