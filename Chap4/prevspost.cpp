 #include <iostream>
 
 int main() {
     int x1 = 1, y1 = 10, x2 = 100, y2 = 1000;
     std::cout << "x1=" << x1 << ", y1=" << y1
               << ", x2=" << x2 << ", y2=" << y2 << '\n';
     y1 = x1++;
     std::cout << "x1=" << x1 << ", y1=" << y1
               << ", x2=" << x2 << ", y2=" << y2 << '\n';
     y2 = ++x2;
     std::cout << "x1=" << x1 << ", y1=" << y1
               << ", x2=" << x2 << ", y2=" << y2 << '\n';
 }

