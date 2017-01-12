 #include <iostream>
 #include <ctime>

 int main() {
     char letter;
     std::cout << "Enter a character: ";
     clock_t seconds = clock();    // Record starting time
     std::cin >> letter;
     clock_t other = clock();      // Record ending time
     std::cout << static_cast<double>(other - seconds)/CLOCKS_PER_SEC
               << " seconds\n";
 }

