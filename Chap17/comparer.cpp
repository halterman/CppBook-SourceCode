 #include "comparer.h"

 //  Method that actually performs the comparison
 //  Derived classes may customize this method
 bool Comparer::compare_impl(int m, int n) {
     return comp(m, n);
 }
 
 //  Method that actually performs the swap
 //  Derived classes may customize this method
 void Comparer::swap_impl(int& m, int& n) {
     int temp = m;
     m = n;
     n = temp;
 }
 
 //  The client must initialize a Comparer object with a 
 //  suitable comparison function.
 Comparer::Comparer(bool (*f)(int, int)): 
       compare_count(0), swap_count(0), comp(f) {}
 
 //  Resets the counters to make ready for a new sort
 void Comparer::reset() {
     compare_count = swap_count = 0;
 }
 
 //  Method that performs the comparison.  It delegates 
 //  the actual work to the function pointed to by comp.
 //  This method logs each invocation.
 bool Comparer::compare(int m, int n) {
     compare_count++;
     return compare_impl(m, n);
 }
 
 //  Method that performs the swap. 
 //  Interchange the values of 
 //  its parameters a and b which are
 //  passed by reference.
 //  This method logs each invocation.
 void Comparer::swap(int& m, int& n) {
     swap_count++;
     swap_impl(m, n);
 }
 
 //  Returns the number of comparisons this object has
 //  performed since it was created.
 int Comparer::comparisons() const {
     return compare_count;
 }
 
 //  Returns the number of swaps this object has
 //  performed since it was created.
 int Comparer::swaps() const {
     return swap_count;
 }

