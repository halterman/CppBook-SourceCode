 #include <iostream>

 /*
  *  swap(a, b)
  *     Attempts to interchange the values of 
  *     its parameters a and b.  That it does, but
  *     unfortunately it only affects the local
  *     copies.
  */
 void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
 }

 /*
  *  main
  *     Attempts to interchange the values of
  *     two variables using a faulty swap function.
  */
 int main() {
     int var1 = 5, var2 = 19;
     std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
     swap(var1, var2);
     std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
 }

