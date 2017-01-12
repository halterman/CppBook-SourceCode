 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 /*
  *  print
  *     Prints the contents of an int vector
  *     a is the vector to print; a is not modified
  */
 void print(const std::vector<int>& a) {
     int n = a.size();
     std::cout << "{";
     if (n > 0) {
         std::cout << a[0];  // Print the first element
         for (int i = 1; i < n; i++)
             std::cout << ',' << a[i];  // Print the rest
     }
     std::cout << "}";
 }
 
 
 int main() {
     std::vector<int> nums { 0, 1, 2, 3 };
     std::cout << "---------------\n";
     do {
         print(nums);
         std::cout << '\n';
     }   // Compute the next ordering of elements
     while (next_permutation(begin(nums), std::end(nums)));
 }

