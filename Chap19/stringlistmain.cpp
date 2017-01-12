 // stringlistmain.cpp
 
 #include <iostream>
 #include <string>
 #include "linkedlist.h"   
 
 int main() {
     bool done = false;
     char command;
     std::string value;
     LinkedList<std::string> list;  // Instantiated for strings
 
     while (!done) {
         std::cout << "I)nsert <item>  P)rint  L)ength D)elete <item>  E)rase Q)uit >>";
         std::cin >> command;
         switch (command) {
           case 'I':   // Insert a new element into the list
           case 'i':
             if (std::cin >> value)
                 list.insert(value);
             else
                 done = true;
             break;
           case 'D':   // Insert a new element into the list
           case 'd':
             if (std::cin >> value)
                 if (list.remove(value))
                     std::cout << value << " removed\n";
                 else
                     std::cout << value << " not found\n";
             else
                 done = true;
             break;
           case 'P':  // Print the contents of the list
           case 'p':
             list.print();
             break;
           case 'L':  // Print the list's length
           case 'l':
             std::cout << "Number of elements: " << list.length() << '\n';
             break;
           case 'E':  // Erase the list
           case 'e':
             list.clear();
             break;
           case 'Q':  // Exit the loop (and the program)
           case 'q':
             done = true;
             break;
         }
     }
 }

