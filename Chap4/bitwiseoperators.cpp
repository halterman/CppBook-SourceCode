 #include <iostream>
 
 int main() {
     int x, y;
     std::cout << "Please enter two integers: ";
     std::cin >> x >> y;
     std::cout << x << " & " << y << " = " << (x & y) << '\n';
     std::cout << x << " | " << y << " = " << (x | y) << '\n';
     std::cout << x << " ^ " << y << " = " << (x ^ y) << '\n';
     std::cout << "~" << x << " = " << ~x << '\n';
     std::cout << x << " << " << 2 << " = " << (x << 2) << '\n';
     std::cout << x << " >> " << 2 << " = " << (x >> 2) << '\n';
 }

