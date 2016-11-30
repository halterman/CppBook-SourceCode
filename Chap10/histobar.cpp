 #include <iostream>
 
 //  Draws a bar n segments long
 //  using iteration.
 void segments1(int n) {
     while (n > 0) {
         std::cout << "*";
         n--;
     }
     std::cout << '\n';
 }
 
 //  Draws a bar n segments long
 //  using recursion.
 void segments2(int n) {
     if (n > 0) {
         std::cout << "*";
         segments2(n - 1);
     }
     else
         std::cout << '\n';
 }
 
 int main() {
     segments1(3);
     segments1(10);
     segments1(0);
     segments1(5);
     std::cout << "-------------\n";
     segments2(3);
     segments2(10);
     segments2(0);
     segments2(5);
 }

