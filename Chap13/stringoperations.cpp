 #include <iostream>
 #include <string>

 int main() {
     //  Declare a string object and initialize it
     std::string word = "fred";
     //  Prints 4, since word contains four characters
     std::cout << word.length() << '\n';
     //  Prints "not empty", since word is not empty
     if (word.empty()) 
         std::cout << "empty\n";
     else
         std::cout << "not empty\n";
     //  Makes word empty
     word.clear();
     //  Prints "empty", since word now is empty
     if (word.empty()) 
         std::cout << "empty\n";
     else
         std::cout << "not empty\n";
     //  Assign a string using operator= method
     word = "good";
     //  Prints "good"
     std::cout << word << '\n';
     //  Append another string using operator+= method
     word += "-bye";
     //  Prints "good-bye"
     std::cout << word << '\n';
     //  Print first character using operator[] method
     std::cout << word[0] << '\n';
     //  Print last character
     std::cout << word[word.length() - 1] << '\n';
     //  Prints "od-by", the substring starting at index 2 of length 5
     std::cout << word.substr(2, 5);
     std::string first = "ABC", last = "XYZ";
     //  Splice two strings with + operator
     std::cout << first + last << '\n';
     std::cout << "Compare " << first << " and ABC: ";
     if (first == "ABC")
         std::cout << "equal\n";
     else
         std::cout << "not equal\n";
     std::cout << "Compare " << first << " and XYZ: ";
     if (first == "XYZ")
         std::cout << "equal\n";
     else
         std::cout << "not equal\n";
 }

