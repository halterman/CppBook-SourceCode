 #include <iostream>

 // Count to ten and print each number on its own line
 void count_to_10() {
     for (int i = 1; i <= 10; i++)
         std::cout << i << '\n';
 }

 int main() {
     std::cout << "Going to count to ten . . .";
     count_to_10();
     std::cout << "Going to count to ten again. . .";
     count_to_10();
 }

