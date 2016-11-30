 #include <iostream>
 #include <set>
 #include <algorithm>
 #include <iterator>
 
 #include "setoutput.h"
 
 // Computes the intersection of sets s1 and s2
 template<typename T>
 std::set<T> operator&(const std::set<T>& s1, const std::set<T>& s2) {
     std::set<T> result;
     std::set_intersection(std::begin(s1), std::end(s1),
                           std::begin(s2), std::end(s2),
                           std::inserter(result, std::end(result)));
     return result;
 }
 
 // Computes the union of sets s1 and s2
 template<typename T>
 std::set<T> operator|(const std::set<T>& s1, const std::set<T>& s2) {
     std::set<T> result;
     std::set_union(std::begin(s1), std::end(s1), std::begin(s2), std::end(s2),
                    std::inserter(result, std::end(result)));
     return result;
 }
 
 
 int main() {
     std::set<int> s1 {1, 2, 3, 4, 5, 6, 7, 8};
     std::set<int> s2 {2, 5, 7, 9, 10};
  
     std::cout << s1 << " & " << s2 << " = " << (s1 & s2) << '\n';
     std::cout << s1 << " | " << s2 << " = " << (s1 | s2) << '\n';
 }

