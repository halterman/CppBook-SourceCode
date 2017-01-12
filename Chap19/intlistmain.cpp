 // intlistmain.cpp
 
 #include <iostream>
 #include "linkedlist.h"   
 
 int main() {
     bool done = false;
     char command;
     int value;
     LinkedList<int> list;     // Instantiated for integers
 
     while (!done) {
         std::cout << "I)nsert <item>  D)elete <item> P)rint  L)ength  E)rase Q)uit >>";
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

