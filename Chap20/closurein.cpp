 #include <iostream>
 #include <functional>
 
 int evaluate2(std::function<int(int, int)> f, int x, int y) {
     return f(x, y);
 }
 
 int main() {
     int a;
     std::cout << "Enter an integer: ";
     std::cin >> a;
     std::cout << evaluate2([a](int x, int y) {
                                if (x == a)
                                    x = 0;
                                else 
                                    y++;
                                return x + y;
                            }, 2, 3) << '\n';
 }


