 #include <iostream>
 #include <string>
 
 int main() {
     std::string s = "Wow";
     std::cout << s[3] << '\n';
     try {
         std::cout << s.at(3) << '\n';
     }
     catch (std::exception& e) {
         std::cout << e.what() << '\n';
     }
 }

