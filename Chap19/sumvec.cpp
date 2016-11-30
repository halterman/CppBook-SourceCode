 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 int main() {
     int sum = 0;
     std::vector<int> vec{5, 22, 6, -3, 8, 4};
     for_each(std::begin(vec), std::end(vec), [&sum](int x) {  sum += x; });
     std::cout << "The sum is " << sum << '\n';
 }

