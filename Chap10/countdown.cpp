 #include <iostream>
 
 // Prints a count down from n to zero.  The default
 // starting value is 10.
 void countdown(int n=10) {
     while (n > 0) // Count down from n to zero
         std::cout << n-- << '\n';
 }
 
 int main() {
     countdown(5);
     std::cout << "----------" << '\n';
     countdown();
 } 

