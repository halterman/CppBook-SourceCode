 #include <iostream>
 #include <vector>

 int main() {
     //  Make a simple integer vector
     std::vector<int> vec {10, 20, 30, 40, 50};
     //  Direct an iterator to the vector's first element
     std::vector<int>::iterator iter = std::begin(vec);
     //  Print the element referenced by the iterator
     std::cout << *iter << '\n';  
     //  Advance the iterator
     iter++;                 
     //  See where the iterator is now
     std::cout << *iter << '\n';  
 }

