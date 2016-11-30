 #include <iostream>
 #include <string>
 
 int main() {
     std::string line;
     std::cout << "Please enter a line of text: "; 
     getline(std::cin, line);
     std::cout << "You entered: \"" << line << "\"" << '\n';
 }

