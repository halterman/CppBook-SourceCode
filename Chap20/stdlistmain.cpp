 // stdlistmain.cpp
 
 #include <iostream>
 #include <list>   // Use the standard doubly linked list class
 
 int main() {
     bool done = false;
     char command;
     int value;
     std::list<int> mylist;    // Initially empty
 
     while (!done) {
         std::cout << "I)nsert <item>  P)rint  L)ength  E)rase Q)uit >>";
         std::cin >> command;
         switch (command) {
           case 'I':   // Insert a new element into the list
           case 'i':
             if (std::cin >> value)
                 mylist.push_back(value);
             else
                 done = true;
             break;
           case 'P':  // Print the contents of the list
           case 'p':
             for (const auto& elem : mylist)
                 std::cout << elem << ' ';
             std::cout << '\n';
             break;
           case 'L':  // Print the list's length
           case 'l':
             std::cout << "Number of elements: " << mylist.size() << '\n';
             break;
           case 'E':  // Erase the list
           case 'e':
             mylist.clear();
             break;
           case 'Q':  // Exit the loop (and the program)
           case 'q':
             done = true;
             break;
         }
     }
 }

