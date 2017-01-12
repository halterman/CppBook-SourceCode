 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 int main() {
     // Set the random seed value
     srand(static_cast<unsigned>(time(0)));

     // Roll the die three times
     for (int i = 0; i < 3; i++) {
         // Generate random number in the range 1...6
         int value = rand() % 6 + 1;


         // Show the die
         std::cout <<  "+-------+\n";
         switch (value) {
           case 1:
             std::cout << "|       |\n";
             std::cout << "|   *   |\n";
             std::cout << "|       |\n";
             break;
           case 2:
             std::cout << "| *     |\n";
             std::cout << "|       |\n";
             std::cout << "|     * |\n";
             break;
           case 3:
             std::cout << "|     * |\n";
             std::cout << "|   *   |\n";
             std::cout << "| *     |\n";
             break;
           case 4:
             std::cout << "| *   * |\n";
             std::cout << "|       |\n";
             std::cout << "| *   * |\n";
             break;
           case 5:
             std::cout << "| *   * |\n";
             std::cout << "|   *   |\n";
             std::cout << "| *   * |\n";
             break;
           case 6:
             std::cout << "| * * * |\n";
             std::cout << "|       |\n";
             std::cout << "| * * * |\n";
             break;
           default:
             std::cout <<  " ***  Error: illegal die value ***\n";
             break;
         }
         std::cout << "+-------+\n";
     }
 }

