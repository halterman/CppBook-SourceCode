 #include <iostream>
 #include <vector>
 #include <cstdlib>
 #include <fstream>
 #include <string>

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
     //  Derived classes may override this method
     virtual bool compare_impl(const T& m, const T& n);

     //  Method that actually performs the swap
     //  Derived classes may override this method
     virtual void swap_impl(T& m, T& n);

 public:
     //  The client must initialize a Comparer object with a 
     //  suitable comparison function.
     Comparer(bool (*f)(const T&, const T&));

     //  Resets the counters to make ready for a new sort
     void reset(); 

     //  Method that performs the comparison.  It delegates 
     //  the actual work to the function pointed to by comp.
     //  This method logs each invocation.
     bool compare(const T& m, const T& n);

     //  Method that performs the swap. 
     //  Interchange the values of 
     //  its parameters a and b which are
     //  passed by reference.
     //  This method logs each invocation.
     void swap(T& m, T& n);

     //  Returns the number of comparisons this object has
     //  performed since it was created.
     int comparisons() const;

     //  Returns the number of swaps this object has
     //  performed since it was created.
     int swaps() const;
 };


 //  Method that actually performs the comparison
 //  Derived classes may override this method
 template <typename T>
 bool Comparer<T>::compare_impl(const T& m, const T& n) {
     return comp(m, n);
 }
 
 //  Method that actually performs the swap
 //  Derived classes may override this method
 template <typename T>
 void Comparer<T>::swap_impl(T& m, T& n) {
     T temp = m;
     m = n;
     n = temp;
 }
 
 //  The client must initialize a Comparer object with a 
 //  suitable comparison function.
 template <typename T>
 Comparer<T>::Comparer(bool (*f)(const T&, const T&)): 
       compare_count(0), swap_count(0), comp(f) {}
 
 //  Resets the counters to make ready for a new sort
 template <typename T>
 void Comparer<T>::reset() {
     compare_count = swap_count = 0;
 }
 
 //  Method that performs the comparison.  It delegates 
 //  the actual work to the function pointed to by comp.
 //  This method logs each invocation.
 template <typename T>
 bool Comparer<T>::compare(const T& m, const T& n) {
     compare_count++;
     return compare_impl(m, n);
 }
 
 //  Method that performs the swap. 
 //  Interchange the values of 
 //  its parameters a and b which are
 //  passed by reference.
 //  This method logs each invocation, so
 //  we do not use std::swap here.
 template <typename T>
 void Comparer<T>::swap(T& m, T& n) {
     swap_count++;
     swap_impl(m, n);
 }
 
 //  Returns the number of comparisons this object has
 //  performed since it was created.
 template <typename T>
 int Comparer<T>::comparisons() const {
     return compare_count;
 }
 
 //  Returns the number of swaps this object has
 //  performed since it was created.
 template <typename T>
 int Comparer<T>::swaps() const {
     return swap_count;
 }


 /*
  *   selection_sort(a, compare)
  *       Arranges the elements of a sequence in an order determined
  *       by the compare object.
  *       begin points to the beginning of the sequence.
  *       end points to the imaginary element just past the last
  *       element of the sequence.
  *       compare is an object that compares the ordering of two 
  *       elements and records the actions it performs.
  *       The function physically rearranges the contents of the 
  *       sequence.
  */
 template <typename T, typename V>
 void selection_sort(const T begin, const T end, Comparer<V>& compare) {
     for (auto i = begin; i != end - 1; i++) {
         //  Note: i, small, and j represent positions within the
         //  sequence.
         //  a[i], a[small], and a[j] represents the elements at
         //  those positions.
         //  small is the position of the smallest value we've seen
         //  so far; we use it to find the smallest value less 
         //  than a[i]
         auto small = i;  
         //  See if a smaller value can be found later in the sequence
         for (auto j = i + 1; j != end; j++)
             if (compare.compare(*j, *small))
                 small = j;  //  Found a smaller value
         //  Swap a[i] and a[small], if a smaller value was found
         if (i != small)
             compare.swap(*i, *small);
     }
 }

 /*
  *  print
  *     Prints the contents of a sequence
  *     begin points to the beginning of the sequence.
  *     end points to the imaginary element just past the last.
  *     The function does not modify the sequence.
  */
 template <typename T>
 void print(const T begin, const T end) {
     std::cout << '{';
     if (begin != end) {
         T iter = begin;
         std::cout << *iter;  //  Print the first element
         iter++;         //  Move to next element
         while (iter != end) {  //  Print the rest
             std::cout << ',' << *iter;  
             iter++;     //  Move to next element
         }
     }
     std::cout << '}';
 }

 /*
  *  less_than(a, b)
  *     Returns true if a < b; otherwise, returns
  *     false.
  */
 template <typename T>
 bool less_than(const T& a, const T& b) {
     return a < b;
 }

 /*
  *  greater_than(a, b)
  *     Returns true if a > b; otherwise, returns
  *     false.
  */
 template <typename T>
 bool greater_than(const T& a, const T& b) {
     return a > b;
 }


 /*
  *  Comparer objects manage the comparisons and element
  *  interchanges on the selection sort function below.
  */
 template <typename T>
 class LogComparer: public Comparer<T> {
     //  Output stream to which logging messages are directed
     std::ofstream fout;

 protected:
     //  Method that actually performs the comparison
     bool compare_impl(const T& m, const T& n) override;

     //  Method that actually performs the swap
     void swap_impl(T& m, T& n) override;

 public:
     //  The client must initialize a LogComparer object with a 
     //  suitable comparison function and the file name of a text
     //  file to which the object will direct logging messages
     LogComparer(bool (*f)(const T&, const T&), 
                           const std::string& filename);

     //  The destructor must close the log file
     ~LogComparer();
 };

 //  Method that actually performs the comparison
 //  Derived classes may override this method
 template <typename T>
 bool LogComparer<T>::compare_impl(const T& m, const T& n) {
     fout << "Comparing " << m << " to " << n << '\n';
     //  Base class method does the comparision
     return Comparer<T>::compare_impl(m, n);
 }
 
 //  Method that actually performs the swap
 //  Derived classes may override this method
 template <typename T>
 void LogComparer<T>::swap_impl(T& m, T& n) {
     fout << "Swapping " << m << " and " << n << '\n';
     //T temp = m;
     //m = n;
     //n = temp;
     //  Base class method does the swap
     Comparer<T>::swap_impl(m, n);
 }
 
 //  The client must initialize a LogComparer object with a 
 //  suitable comparison function and the file name of the
 //  text file to receive logging messages.
 template <typename T>
 LogComparer<T>::LogComparer(bool (*f)(const T&, const T&), 
                          const std::string& filename): Comparer<T>(f) {
     fout.open(filename);
     if (!fout.good()) {
         fout.close();
         std::cout << "Could not open log file " << filename
              << " for writing\n";
         exit(1);  //  Terminate the program
     }
 }

 //  Destructor closes the log file
 template <typename T>
 LogComparer<T>::~LogComparer() {
     fout.close();
 }


 int main() {
    //  Make a vector of integers
    std::vector<int> vec = { 23, -3, 10, 4, 215, 0, -3, 2 };

    std::cout << "Before:   ";
    print(std::begin(vec), std::end(vec));
    std::cout << '\n';
    LogComparer<int> lt(less_than<int>, "upsort.log");
    selection_sort(std::begin(vec), std::end(vec), lt);
    std::cout << "Ascending:  ";
    print(std::begin(vec), std::end(vec));
    std::cout << "  (" << lt.comparisons() << " comparisons, " 
         << lt.swaps() << " swaps)\n";
    LogComparer<int> gt(greater_than<int>, "downsort.log");
    selection_sort(std::begin(vec), std::end(vec), gt);
    std::cout << "Descending:  ";
    print(std::begin(vec), std::end(vec));
    std::cout << "  (" << gt.comparisons() << " comparisons, " 
         << gt.swaps() << " swaps)\n";

    std::cout << "--------------------------------------\n";

    //  Make a vector of string objects
    std::vector<std::string> words{"tree", "girl", "boy", "dog", 
                         "cat", "girl", "bird"};

    //  Make a working copy of the original vector
    std::cout << "Before:   ";
    print(std::begin(words), std::end(words));
    std::cout << '\n';
    LogComparer<std::string> wlt(less_than<std::string>, "upwords.log");
    selection_sort(std::begin(words), std::end(words), wlt);
    std::cout << "Ascending:  ";
    print(std::begin(words), std::end(words));
    std::cout << "  (" << wlt.comparisons() << " comparisons, " 
         << wlt.swaps() << " swaps)\n";
    LogComparer<std::string> wgt(greater_than<std::string>, "downwords.log");
    selection_sort(std::begin(words), std::end(words), wgt);
    std::cout << "Descending:  ";
    print(std::begin(words), std::end(words));
    std::cout << "  (" << wgt.comparisons() << " comparisons, " 
         << wgt.swaps() << " swaps)\n";

    std::cout << "--------------------------------------\n";

    //  Make an array of integers
    int arr[] = { 23, -3, 10, 4, 215, 0, -3, 2 };

    std::cout << "Before:   ";
    print(arr, arr + 8);
    std::cout << '\n';
    LogComparer<int> lt2(less_than<int>, "upsort2.log");
    selection_sort(arr, arr + 8, lt2);
    std::cout << "Ascending:  ";
    print(arr, arr + 8);
    std::cout << "  (" << lt2.comparisons() << " comparisons, " 
         << lt.swaps() << " swaps)\n";
    LogComparer<int> gt2(greater_than<int>, "downsort2.log");
    selection_sort(arr, arr + 8, gt2);
    std::cout << "Descending:  ";
    print(arr, arr + 8);
    std::cout << "  (" << gt2.comparisons() << " comparisons, " 
         << gt.swaps() << " swaps)\n";
 }

