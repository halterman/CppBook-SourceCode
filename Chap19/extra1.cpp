 #include <iostream>
 #include <initializer_list>

 #include "linkedlist.h"
 
 template <typename T>
 LinkedList<T> make_list(std::initializer_list<T> args) {
     LinkedList<T> result;
     for (auto elem : args) 
         result.insert(elem);
     return result;
 }

 int main() {
     // First build some lists that contain integers
     LinkedList<int> intlist1 = make_list({1, 2, 3}), 
                     intlist2 = make_list({10, 20}), 
                     intlist3 = make_list({100, 200, 300});

     // Next build a list that contains lists of integers
     LinkedList<LinkedList<int>> listoflists 
            = make_list({intlist1, intlist2, intlist3});
     std::cout << "--------------------\n";
     std::cout << listoflists << '\n';
     std::cout << "--------------------\n";
      
 }

