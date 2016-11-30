 #include <iostream>
 #include <fstream>
 #include <vector>
 #include <string>
 
 // Get an integer from the user. Note that std::stoi can
 // throw a std::invalid_argument exception if the user's
 // input is not an integer, and it can throw std::out_of_range
 // if the string is a valid integer but outside the range of
 // a C++ int on this platform.
 int get_int() {
     std::string input;
     std::cin >> input;
     int result = stoi(input);
     return result;
 }
  
 int main() {
     std::vector<int> a { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
     try {  //  What possibly could go wrong?
         int n = a.size();
         std::cout << "Enter index in the range 0..." << n - 1 << ": ";
         //  Will user enter a valid integer value?
         int i = get_int();
         std::cout << "Index entered: " << i << '\n';
         //  Will the user's index be in the range of valid indices?
         std::cout << "a[" << i << "] = " << a.at(i) << '\n';
     }
     catch (std::out_of_range&)  {
         std::cout << "Index provided is out of range\n";
     }
     catch (std::invalid_argument&) {
         std::cout << "Index provided is not an integer\n";
     }
     catch (...) {  //  What have we forgotten?
         std::cout << "Unknown error\n";
     }
 }

