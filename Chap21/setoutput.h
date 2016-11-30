#ifndef SETOUTPUT_H_DEFINED
#define SETOUTPUT_H_DEFINED

 #include <iostream>
 #include <set>
 
 // Print out a set in a familiar form
 template <typename T>
 std::ostream& operator<<(std::ostream& os, const std::set<T>& s) {
     os << '{';
     auto iter = std::begin(s);
     auto done = std::end(s);
     if (iter != done) {
         os << *iter++;
         while (iter != done)
             os << ", " << *iter++;
     }
     os << '}';
     return os;
 }
 
 #endif

