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
  *  clear(a, n)
  *     Makes all the elements of array a zero
  *     a is the array to zero out
  *     n is the size of the array
  */
 void clear(int a[], int n) {
     for (int i = 0; i < n; i++) 
         a[i] = 0;
 }
 
 int main() {
     int list[] = { 2, 4, 6, 8 }; 
     //  Print the contents of the array
     print(list, 4);
     //  Zero out the array
     clear(list, 4);
     //  Reprint the contents of the array
     print(list, 4);
 }

