 #include <iostream>

 /*
  *  iterative_print(a,n)
  *     Prints the contents of array a
  *     a is the array to print; a is not modified
  *     n is number of elements in a
  */
 void iterative_print(const int *a, int n) {
     for (int i = 0; i < n; i++)
         std::cout << a[i] << ' '; 
 }

 /*
  *  recursive_print(a,n)
  *     Prints the contents of array a
  *     a is the array to print; a is not modified
  *     n is number of elements in a
  */
 void recursive_print(const int *a, int n) {
     if (n > 0) {
         std::cout << *a << ' ';   //  Print the first element of the array
         recursive_print(a + 1, n - 1);  //  Print rest of the array
     }
 }

 int main() {
    int list[] = { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
    iterative_print(list, 11);
    recursive_print(list, 11);
 }

