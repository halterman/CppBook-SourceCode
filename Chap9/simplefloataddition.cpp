 #include <iostream>
 
 int main() {
     double x = 0.9;
     x += 0.1;
     if (x == 1.0)
         std::cout << "OK\n";
     else
         std::cout << "NOT OK\n";
 }

