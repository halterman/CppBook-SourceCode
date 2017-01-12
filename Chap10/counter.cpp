 #include <iostream>
 #include <iomanip>

 /*
  *  count
  *     Keeps track of a count.
  *     Returns the current count.
  */

 int count() {
     // cnt's value is retained between calls because it
     // is declared static
     static int cnt = 0;  
     return ++cnt;   // Increment and return current count
 }

 int main() {
     // Count to ten
     for (int i = 0;  i < 10;  i++)
        std::cout << count() << ' ';
     std::cout << '\n';
 }

