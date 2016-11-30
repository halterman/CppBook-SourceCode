 #ifndef COMPARER_H_
 #define COMPARER_H_
 /*
  *  Comparer objects manage the comparisons and element
  *  interchanges on the selection sort function below.
  */
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
     bool (*comp)(int, int);

 protected:
     //  Method that actually performs the comparison
     //  Derived classes may customize this method
     virtual bool compare_impl(int m, int n);

     //  Method that actually performs the swap
     //  Derived classes may customize this method
     virtual void swap_impl(int& m, int& n);

 public:
     //  The client must initialize a Comparer object with a 
     //  suitable comparison function.
     Comparer(bool (*f)(int, int));

     //  Resets the counters to make ready for a new sort
     void reset(); 

     //  Method that performs the comparison.  It delegates 
     //  the actual work to the function pointed to by comp.
     //  This method logs each invocation.
     bool compare(int m, int n);

     //  Method that performs the swap. 
     //  Interchange the values of 
     //  its parameters a and b which are
     //  passed by reference.
     //  This method logs each invocation.
     void swap(int& m, int& n);

     //  Returns the number of comparisons this object has
     //  performed since it was created.
     int comparisons() const;

     //  Returns the number of swaps this object has
     //  performed since it was created.
     int swaps() const;
 };
 #endif

