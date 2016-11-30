 #include <iostream>

 /*
  *  swap(a, b)
  *     Interchanges the values of memory
  *     referenced by its parameters a and b.  
  *     It effectively interchanges the values
  *     of variables in the caller's context.
  */
 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 /*
  *  main
  *     Interchanges the values of two variables 
  *     using the swap function.
  */
 int main() {
     int var1 = 5, var2 = 19;
     std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
     swap(&var1, &var2);
     std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
 }

