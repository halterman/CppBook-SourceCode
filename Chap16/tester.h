 #ifndef TESTER_H_
 #define TESTER_H_
 
 #include <vector>
 #include <string>
 
 class Tester {
     int error_count;  //  Number of errors detected
     int total_count;  //  Number of tests executed

     //  Determines if double-precision floating-point 
     //  values d1 and d2 are "equal."  
     //  Returns true if their difference is less than tolerance.
     bool equals(double d1, double d2, double tolerance) const;

     //  Displays vector a in human-readable form
     void print_vector(const std::vector<int>& a);
 public:
     //  Initializes a Tester object
     Tester();

     //  Determines if an expected integer result (expected)
     //  matches the actual result (actual).  msg is the message
     //  that describes the test. 
     void check_equals(const std::string& msg, int expected, int actual);

     //  Determines if an expected double result (expected)
     //  matches the actual result (actual) or they differ by at
     //  most tolerance.  msg is the message that describes the test. 
     void check_equals(const std::string& msg, double expected, 
                       double actual, double tolerance);

     //  Determines if an expected string result (expected)
     //  matches the actual result (actual).  msg is the message
     //  that describes the test. 
     void check_equals(const std::string& msg, 
                       const std::vector<int>& expected, 
                       const std::vector<int>& actual);

     //  Reports the final results: number of tests passed and
     //  failed and the total number of tests run.
     void report_results() const;
 };

#endif

