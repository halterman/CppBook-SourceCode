 #include <iostream>

 int main() {
     int input, sum = 0;
     bool done = false;
     while (!done) {
         std::cout << "Enter positive integer (999 quits): ";
         std::cin >> input;
         if (input < 0) {
             std::cout << "Negative value " << input << " ignored\n";
             continue;  // Skip rest of body for this iteration
         }
         if (input != 999) {
             std::cout << "Tallying " << input << '\n';
             sum += input;
         } 
         else
             done = (input == 999);  // 999 entry exits loop
     }
     std::cout << "sum = " << sum << '\n';
 }

