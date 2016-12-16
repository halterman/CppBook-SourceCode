 #include <iostream>
 #include <string>
 #include <map>
 #include <algorithm>
 
 int main() {
     std::map<std::string, int> contacts; // Telephone contact list
     bool running = true;
 
     while (running) {
         std::string name;
         int number;
         char command;
         std::cout << "A)dd   L)ook up   Q)uit: ";
         std::cin >> command;
         switch (command) {
             case 'A':
             case 'a':
                 //std::cout << "Enter new name: " << '\n';
                 std::cin >> name;
                 std::transform(std::begin(name), std::end(name), 
                                std::begin(name), toupper);
                 //std::cout << "Enter phone number for " << name << ": ";
                 std::cin >> number;
                 contacts[name] = number;
                 break;
             case 'L':
             case 'l':
                 std::cin >> name;
                 transform(std::begin(name), std::end(name), std::begin(name),
                           ::toupper);
                 std::cout << name << " " << contacts[name] << '\n';
                 break;
             case 'Q':
             case 'q':
                 running = false;
                 break;
             case 'D':  // Secret command
             case 'd':
                 for (auto& elem : contacts)
                     std::cout << elem.first << " " << elem.second << '\n';
                 break;
             default:
                 std::cout << command << "is not a valid command" << '\n';
         }
     }
 }

