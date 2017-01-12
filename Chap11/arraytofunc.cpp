 #include <iostream>

 /*
  *  print(a, n)
  *     Prints the contents of an int array
  *     a is the array to print
  *     n is the size of the array
  */
 void print(int a[], int n) {
     for (int i = 0; i < n; i++) 
         std::cout << a[i] << " ";
     std::cout << '\n';
 }

 /*
  *  sum(a, n)
  *     Adds up the contents of an int array
  *     a is the array to sum
  *     n is the size of the array
  */
 int sum(int a[], int n) {
     int result = 0;
     for (int i = 0; i < n; i++) 
         result += a[i];
     return result;
 }
 
 int main() {
     int list[] = { 2, 4, 6, 8 }; 
     // Print the contents of the array
     print(list, 4);
     // Compute and display sum
     std::cout << sum(list, 4) << '\n';
     // Zero out all the elements of list
     for (int i = 0; i < 4; i++)
         list[i] = 0;
     // Reprint the contents of the array
     print(list, 4);
     // Compute and display sum
     std::cout << sum(list, 4) << '\n';
 }

