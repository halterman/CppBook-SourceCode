 #include <iostream>
 #include <list>
 #include <algorithm>
 
 int main() {
     // Make a list of integers
     std::list<int> seq{5, 22, 6, -3, 8, 4};
     // Display the vector
     std::for_each(std::begin(seq), std::end(seq), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
     // Increase each element in the vector by 1
     std::for_each(std::begin(seq), std::end(seq), 
                   [](int& x) { x++; });
     // Redisplay the vector
     std::for_each(std::begin(seq), std::end(seq), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
 }

