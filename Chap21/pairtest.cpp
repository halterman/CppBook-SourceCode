 #include <iostream>
 #include <string>
 #include <tuple>
 
 int main() {
     // Declare some local variables
     std::string word;
     int number;
     double quantity;
     
     // Construct a pair directly with some literal values
     std::pair<std::string, double> t1 {"Bob", 9.5};
     // Unpack the pair using std::tie
     std::tie(word, quantity) = t1;
     // Print the results
     std::cout << "word = " << word << ", quantity = " << quantity << '\n';
     
     // Use std::make_pair convenience function
     auto t2 = std::make_pair("Eve", 22);
     // Unpack the pair using std::get
     word   = std::get<0>(t2);  // 1st component
     number = std::get<1>(t2);  // 2nd component
     // Print the results
     std::cout << "word = " << word << ", number = " << number << '\n';
 
     // Declare some variables
     std::string name = "Jo";
     int age = 12;
     // Build a pair from more general expressions
     auto t3 = std::make_pair(name + "-ann", 2* age);
     // Unpack the tuple's using first and second fields
     word   = t3.first;   // 1st component
     number = t3.second;  // 2nd component
     // Print the results
     std::cout << "word = " << word << ", number = " << number << '\n';
 }

