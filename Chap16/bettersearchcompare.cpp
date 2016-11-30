 #include <iostream>
 #include <iomanip>
 #include <ctime>
 #include <vector>
 #include "Stopwatch.h"

 /*
  *   binary_search(v, seek)
  *       Returns the index of element seek in vector v;
  *       returns -1 if seek is not an element of v
  *       v is the vector to search; v's contents must be
  *       sorted in ascending order.
  *       seek is the element to find
  */
 int binary_search(const std::vector<int>& v, int seek) {
     int first = 0,            //  Initially the first element in vector
         last = v.size() - 1,  //  Initially the last element in vector
         mid;                  //  The middle of the vector
     while (first <= last) {
         mid = first + (last - first + 1)/2;
         if (v[mid] == seek)
             return mid;       //  Found it
         else if (v[mid] > seek)
             last = mid - 1;   //  continue with 1st half
         else  //  v[mid] < seek
             first = mid + 1;  //  continue with 2nd half
     }
     return -1;    //  Not there
 }

 //  This version requires vector v to be sorted in 
 //  ascending order.
 /*
  *   linear_search(v, seek)
  *       Returns the index of element seek in vector v;
  *       returns -1 if seek is not an element of a
  *       v is the vector to search; v's contents must be
  *       sorted in ascending order.
  *       seek is the element to find
  */
 int linear_search(const std::vector<int>& v, int seek) {
     size_t n = v.size();
     for (size_t i = 0;  i < n && v[i] <= seek;  i++)
         if (v[i] == seek)
             return i;   //  Return position immediately
     return -1;  //  Element not found
 }

 int main() {
    const size_t SIZE = 30000;
    std::vector<int> list(SIZE);

    Stopwatch timer;

    //  Ensure the elements are ordered low to high
    for (size_t i = 0; i < SIZE; i++)
        list[i] = i;
    //  Search for all the elements in list using linear search
    timer.start();
    for (size_t i = 0; i < SIZE; i++)
        linear_search(list, i);
    //  Print the elapsed time
    timer.stop();
    std::cout << "Linear elapsed: " << timer.elapsed() << " seconds\n";
    //  Prepare for a new timing
    timer.reset();  
    //  Search for all the elements in list using binary search
    timer.start();
    for (size_t i = 0; i < SIZE; i++)
        binary_search(list, i);
    //  Print the elapsed time
    timer.stop();
    std::cout << "Binary elapsed: " << timer.elapsed() << " seconds\n";
 }

