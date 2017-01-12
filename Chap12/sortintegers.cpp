 #include <iostream>
 #include <vector>

 /*
  *  swap(a, b)
  *     Interchanges the values of memory
  *     referenced by its parameters a and b.  
  *     It effectively interchanges the values
  *     of variables in the caller's context.
  */
 void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
 }

 /*
  *   selection_sort
  *       Arranges the elements of vector a into ascending order.
  *       a is a vector that contains integers.
  */
 void selection_sort(std::vector<int>& a) {
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
             if (a[j] < a[small])
                 small = j;  // Found a smaller value
         // Swap a[i] and a[small], if a smaller value was found
         if (i != small)
             swap(a[i], a[small]);
     }
 }

 /*
  *  print
  *     Prints the contents of a vector of integers.
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
    std::vector<int> list{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    std::cout << "Before: ";
    print(list);
    std::cout << '\n';
    selection_sort(list);
    std::cout << "After: ";
    print(list);
    std::cout << '\n';
 }

