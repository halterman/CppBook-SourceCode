 #ifndef GENERICCOMPARER_H_
 #define GENERICCOMPARER_H_
 /*
  *  Comparer objects manage the comparisons and element
  *  interchanges on the selection sort function below.
  */
 template <typename T>
 class Comparer {
     //  The object's data is private, so it is inaccessible to
     //  clients and derived classes

     //  Keeps track of the number of comparisons
     //  performed
     int compare_count;

     //  Keeps track of the number of swaps performed
     int swap_count;

     //  Function pointer directed to the function to
     //  perform the comparison
     bool (*comp)(const T&, const T&);

 protected:
     //  Method that actually performs the comparison
     //  Derived classes may customize this method
     virtual bool compare_impl(const T& m, const T& n) {
         return comp(m, n);
     }

     //  Method that actually performs the swap
     //  Derived classes may customize this method
     virtual void swap_impl(T& m, T& n) {
         T temp = m;
         m = n;
         n = temp;
     }

 public:
     //  The client must initialize a Comparer object with a 
     //  suitable comparison function.
     Comparer(bool (*f)(const T&, const T&)):
                    compare_count(0), swap_count(0), comp(f) {}

     //  Resets the counters to make ready for a new sort
     void reset() {
         compare_count = swap_count = 0;
     }

     //  Method that performs the comparison.  It delegates 
     //  the actual work to the function pointed to by comp.
     //  This method logs each invocation.
     bool compare(const T& m, const T& n) {
         compare_count++;
         return compare_impl(m, n);
     }

     //  Method that performs the swap. 
     //  Interchange the values of 
     //  its parameters a and b which are
     //  passed by reference.
     //  This method logs each invocation.
     void swap(T& m, T& n) {
         swap_count++;
         swap_impl(m, n);
     }

     //  Returns the number of comparisons this object has
     //  performed since it was created.
     int comparisons() const {
         return compare_count;
     }

     //  Returns the number of swaps this object has
     //  performed since it was created.
     int swaps() const {
         return swap_count;
     }
 };

 #endif

