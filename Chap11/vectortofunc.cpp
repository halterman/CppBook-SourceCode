 #include <iostream>
 #include <vector>

 /*
  *  print(v)
  *     Prints the contents of an int vector
  *     v is the vector to print
  */
 void print(std::vector<int> v) {
     for (int elem : v) 
         std::cout << elem << " ";
     std::cout << '\n';
 }

 /*
  *  sum(v)
  *     Adds up the contents of an int vector
  *     v is the vector to sum
  *     Returns the sum of all the elements
  *     or zero if the vector is empty.
  */
 int sum(std::vector<int> v) {
     int result = 0;
     for (int elem : v) 
         result += elem;
     return result;
 }
 
 int main() {
     std::vector<int> list{ 2, 4, 6, 8, };
     //  Print the contents of the vector
     print(list);
     //  Compute and display sum
     std::cout << sum(list) << '\n';
     //  Zero out all the elements of list
     int n = list.size();
     for (int i = 0; i < n; i++)
         list[i] = 0;
     //  Reprint the contents of the vector
     print(list);
     //  Compute and display sum
     std::cout << sum(list) << '\n';
 }

