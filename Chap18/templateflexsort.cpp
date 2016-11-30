 #include <iostream>
 #include <string>
 #include <vector>
 #include <utility>  //  For generic swap function

 /*
  *  less_than(a, b)
  *     Returns true if a < b; otherwise, returns
  *     false.
  */
 template <typename T>
 bool less_than(const T& a, const T& b) {
     return a < b;
 }

 /*
  *  greater_than(a, b)
  *     Returns true if a > b; otherwise, returns
  *     false.
  */
 template <typename T>
 bool greater_than(const T& a, const T& b) {
     return a > b;
 }

 /*
  *   selection_sort(a, n, compare)
  *       Arranges the elements of vector vec in an order determined
  *       by the compare function.
  *       vec is a vector.
  *       compare is a function that compares the ordering of
  *            two types that support the < operator.
  *       The contents of vec are physically rearranged.
  */
 template <typename T>
 void selection_sort(std::vector<T>& vec,  
                     bool (*compare)(const T&, const T&)) {
     int n = vec.size();
     for (int i = 0;  i < n - 1;  i++) {
         //  Note: i,small, and j represent positions within vec.
         //  vec[i], vec[small], and a[j] represents the elements at
         //  those positions.
         //  small is the position of the smallest value we've seen
         //  so far; we use it to find the smallest value less 
         //  than vec[i]
         int small = i;  
         //  See if a smaller value can be found later in the vector
         for (int j = i + 1;  j < n;  j++)
             if (compare(vec[j], vec[small]))
                 small = j;  //  Found a smaller value
         //  Swap vec[i] and vec[small], if a smaller value was found
         if (i != small)
             std::swap(vec[i], vec[small]); // Uses swap from <utility> 
     }
 }


 /*
  *  print
  *     Prints the contents of a vector
  *     vec is the vector to print.
  *     The function does not modify vec.
  */
 template <typename T>
 void print(const std::vector<T>& vec) {
     int n = vec.size();
     std::cout << '{';
     if (n > 0) {
         std::cout << vec[0];  //  Print the first element
         for (int i = 1; i < n; i++)
             std::cout << ',' << vec[i];  //  Print the rest
     }
     std::cout << '}';
 }


 int main() {
    std::vector<int> list{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    std::cout << "Original:   ";
    print(list);
    std::cout << '\n';
    selection_sort(list, less_than<int>);
    std::cout << "Ascending:  ";
    print(list);
    std::cout << '\n';
    selection_sort(list, greater_than<int>);
    std::cout << "Descending: ";
    print(list);
    std::cout << '\n';
    std::cout << "-------------------------------\n";
    std::vector<std::string> words { "tree", "girl", "boy", "apple", 
                                     "dog", "cat", "bird" };
    std::cout << "Original:   ";
    print(words);
    std::cout << '\n';
    selection_sort(words, less_than<std::string>);
    std::cout << "Ascending:  ";
    print(words);
    std::cout << '\n';
    selection_sort(words, greater_than<std::string>);
    std::cout << "Descending: ";
    print(words);
    std::cout << '\n';
 }

