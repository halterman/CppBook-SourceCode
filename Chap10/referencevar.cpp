 #include <iostream>
 
 int main() {
     int x = 5;
     int y = x;
     int& r = x;
     std::cout << "x = " << x << '\n';
     std::cout << "y = " << y << '\n';
     std::cout << "r = " << r << '\n';
     std::cout << "Assign 7 to x\n";
     x = 7;
     std::cout << "x = " << x << '\n';
     std::cout << "y = " << y << '\n';
     std::cout << "r = " << r << '\n';
     std::cout << "Assign 8 to y\n";
     y = 8;
     std::cout << "x = " << x << '\n';
     std::cout << "y = " << y << '\n';
     std::cout << "r = " << r << '\n';
     std::cout << "Assign 2 to r\n";
     r = 2;
     std::cout << "x = " << x << '\n';
     std::cout << "y = " << y << '\n';
     std::cout << "r = " << r << '\n';
 }

