 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 /*
  *  initialize_die
  *     Initializes the randomness of the die
  */
 void initialize_die() {
     //  Set the random seed value
     srand(static_cast<unsigned>(time(0)));
 }

 /*
  *  show_die(spots)
  *     Draws a picture of a die with number of spots
  *     indicated
  *     spots is the number of spots on the top face
  */
 void show_die(int spots) {
     std::cout <<  "+-------+\n";
     switch (spots) {
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

 /*
  *  roll
  *     Returns a pseudorandom number in the range 1...6
  */
 int roll() {
     return rand() % 6 + 1;
 }

 /*
  *  main
  *      Simulates the roll of a die three times
  */
 int main() {

     //  Initialize the die
     initialize_die();

     //  Roll the die three times
     for (int i = 0; i < 3; i++)
         show_die(roll());
 }

