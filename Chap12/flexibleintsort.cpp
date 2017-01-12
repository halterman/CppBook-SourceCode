 #include <iostream>
 #include <vector>

 /*
  *  less_than(a, b)
  *     Returns true if a < b; otherwise, returns
  *     false.
  */
 bool less_than(int a, int b) {
     return a < b;
 }

 /*
  *  greater_than(a, b)
  *     Returns true if a > b; otherwise, returns
  *     false.
  */
 bool greater_than(int a, int b) {
     return a > b;
 }

 /*
  *   selection_sort(a, compare)
  *       Arranges the elements of a in an order determined
  *       by the compare function.
  *       a is a vector of integers.  
  *       compare is a function that compares the ordering of
  *            two integers.
  */
 void selection_sort(std::vector<int>& a, bool (*compare)(int, int)) {
     int n = a.size();
     for (int i = 0;  i < n - 1;  i++) {
         // Note: i,small, and j represent positions within a
         // a[i], a[small], and a[j] represents the elements at
         // those positions.
         // small is the position of the smallest value we've seen
         // so far; we use it to find the smallest value less 
         // than a[i]
         int small = i;  
         // See if a smaller value can be found later in the vector
         for (int j = i + 1;  j < n;  j++)
             if (compare(a[j], a[small]))
                 small = j;  // Found a smaller value
         // Swap a[i] and a[small], if a smaller value was found
         if (i != small)
             std::swap(a[i], a[small]);  // Uses std::swap
     }
 }

 /*
  *  print
  *     Prints the contents of an integer vector
  *     a is the vector to print.
  *     a is not modified.
  */
 void print(const std::vector<int>& a) {
     int n = a.size();
     std::cout << '{';
     if (n > 0) {
         std::cout << a[0];  // Print the first element
         for (int i = 1; i < n; i++)
             std::cout << ',' << a[i];  // Print the rest
     }
     std::cout << '}';
 }


 int main() {
    std::vector<int> list{ 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
    std::cout << "Original:   ";
    print(list);
    std::cout << '\n';
    selection_sort(list, less_than);
    std::cout << "Ascending:  ";
    print(list);
    std::cout << '\n';
    selection_sort(list, greater_than);
    std::cout << "Descending: ";
    print(list);
    std::cout << '\n';
 }

