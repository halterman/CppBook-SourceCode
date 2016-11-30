 #include <iostream>
 #include <string>
 #include <tuple>
 #include <cmath>  // For sqrt
 
 int main() {
     // Declare some local variables
     std::string word;
     int number;
     double quantity;
     
     // Construct a tuple directly with some literal values
     std::tuple<std::string, int, double> t1 {"Bob", 4, 9.5};
     // Unpack the tuple's components
     std::tie(word, number, quantity) = t1;
     // Print the results
     std::cout << "word = " << word << ", number = " << number
               << ", quantity = " << quantity << '\n';
     
     // Use std::make_tuple convenience function
     auto t2 = std::make_tuple("Eve", 22, 8.3);
     // Unpack the tuple's components
     std::tie(word, number, quantity) = t2;
     // Print the results
     std::cout << "word = " << word << ", number = " << number
               << ", quantity = " << quantity << '\n';
 
     // Declare some variables
     std::string name = "Jan";
     int age = 12;
     double amount = 50.2;
     // Build a tuple from more general expressions
     auto t3 = std::make_tuple(name, age * 2, std::sqrt(amount));
     // Unpack the tuple's components one at a time
     word     = std::get<0>(t3);  // 1st component is at index 0
     number   = std::get<1>(t3);  // 2nd component is at index 1
     quantity = std::get<2>(t3);  // 3rd component is at index 2
     // Print the results
     std::cout << "word = " << word << ", number = " << number
               << ", quantity = " << quantity << '\n';
 }

