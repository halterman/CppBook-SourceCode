 #include <iostream>
 
 int main() {
     int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 },
         *p;
 
     p = &a[0];  //  p points to first element of array a
 
     //  Print out the contents of the array
     for (int i = 0; i < 10; i++) {
         std::cout << *p << ' ';  //  Print the element p points to
         p++;  //  Increment p so it points to the next element
     }
     std::cout << '\n';
 }

