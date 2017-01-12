 #include <iostream>
 #include "intlist4.h"
 
 
 IntList4 make_list(int n) {
     IntList4 result;
     for (int i = 0; i < n; i++)
         result.insert(i);
     return result;
 }
 
 int main() {
     auto my_list = make_list(4);
     my_list.print();
 }

