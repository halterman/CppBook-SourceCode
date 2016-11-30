 #include <iostream>

 int main() {
     int value;
     std::cout << "Please enter an integer in the range 0...5: ";
     std::cin >> value;
     if (value < 0)
         std::cout << "Too small";
     else 
         if (value == 0)
             std::cout << "zero";
         else
             if (value == 1)
                 std::cout << "one";
              else 
                 if (value == 2)
                     std::cout << "two";
                 else
                     if (value == 3)
                         std::cout << "three";
                     else
                         if (value == 4)
                             std::cout << "four";
                         else
                             if (value == 5)
                                 std::cout << "five";
                             else
                                 std::cout << "Too large";
     std::cout << '\n';
 }

