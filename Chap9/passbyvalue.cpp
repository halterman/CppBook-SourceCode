 #include <iostream>

 /*
  *  increment(x)
  *     Illustrates pass by value protocol.
  */
 void increment(int x) {
    std::cout << "Beginning execution of increment, x = " 
              << x << '\n';
    x++;   //  Increment x
    std::cout << "Ending execution of increment, x = " 
              << x << '\n';
 }

 int main() {
     int x = 5;
     std::cout << "Before increment, x = " << x << '\n';
     increment(x);
     std::cout << "After increment, x = " << x << '\n';
 }

