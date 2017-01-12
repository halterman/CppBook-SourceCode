 #ifndef LOGCOMPARER_H_
 #define LOGCOMPARER_H_

 #include <fstream>
 #include <string>
 #include "comparer.h"

 /*
  *  Comparer objects manage the comparisons and element
  *  interchanges on the selection sort function below.
  */
 class LogComparer: public Comparer {
     // Output stream to which logging messages are directed
     std::ofstream fout;

 protected:
     // Method that actually performs the comparison
     bool compare_impl(int m, int n) override;

     // Method that actually performs the swap
     void swap_impl(int& m, int& n) override;

 public:
     // The client must initialize a LogComparer object with a 
     // suitable comparison function and the file name of a text
     // file to which the object will direct logging messages
     LogComparer(bool (*f)(int, int), const std::string& filename);

     // The destructor must close the log file
     ~LogComparer();
 };

 #endif

