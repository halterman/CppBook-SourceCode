 #include <iostream>

 //  Count to n and print each number on its own line
 void count_to_n(int n) {
     for (int i = 1; i <= n; i++)
         std::cout << i << '\n';
 }

 int main() {
     std::cout << "Going to count to ten . . .";
     count_to_n(10);
     std::cout << "Going to count to five . . .";
     count_to_n(5);
 }

