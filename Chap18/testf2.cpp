 #include <iostream>
 #include "intlist3.h"
 
 void f() {
     IntList3 my_list;    // Constructor called here
     // Add some numbers to the list
     my_list.insert(22);
     my_list.insert(5);
     my_list.insert(-44);
     // Print the list
     my_list.print();
 }   // my_list goes out of scope; destructor automatically frees its memory
 
 int main() {
     f(); 
 } 

