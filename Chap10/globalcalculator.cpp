 #include <iostream>
 #include <cmath>

 /*
  *  help_screen
  *     Displays information about how the program works
  *     Accepts no parameters
  *     Returns nothing
  */
 void help_screen() {
     std::cout << "Add:  Adds two numbers\n";
     std::cout << "      Example: a 2.5 8.0\n";
     std::cout << "Subtract:  Subtracts two numbers\n";
     std::cout << "      Example: s 10.5 8.0\n";
     std::cout << "Print:  Displays the result of the latest operation\n";
     std::cout << "      Example: p\n";
     std::cout << "Help:  Displays this help screen\n";
     std::cout << "      Example: h\n";
     std::cout << "Quit:  Exits the program\n";
     std::cout << "      Example: q\n";
 }

 /*
  *  menu
  *     Display a menu
  *     Accepts no parameters
  *     Returns the character entered by the user.
  */
 char menu() {
     //  Display a menu
     std::cout << "=== A)dd S)ubtract P)rint H)elp Q)uit ===\n";
     //  Return the char entered by user
     char ch;
     std::cin >> ch;
     return ch;
 }

 /*
  *  Global variables used by several functions
  */
 double result = 0.0, arg1, arg2;

 /*
  *  get_input
  *      Assigns the globals arg1 and arg2 from user keyboard
  *      input
  */
 void get_input() {
     std::cin >> arg1 >> arg2;
 }

 /*
  *  report
  *      Reports the value of the global result
  */
 void report() {
     std::cout << result << '\n';
 }

 /*
  *  add
  *     Assigns the sum of the globals arg1 and arg2 
        to the global variable result
  */

 void add() {
    result = arg1 + arg1;
 }

 /*
  *  subtract
  *     Assigns the difference of the globals arg1 and arg2 
  *     to the global variable result
  */

 void subtract() {
    result = arg1 - arg2;
 }

 /*
  *  main
  *     Runs a command loop that allows users to
  *     perform simple arithmetic.
  */
 int main() {
     bool done = false;  //  Initially not done
     do {
         switch (menu()) {
           case 'A':     //  Addition
           case 'a':
             get_input();
             add();
             report();
             break;
           case 'S':     //  Subtraction
           case 's':
             get_input();
             subtract();
             report();
           case 'P':     //  Print result
           case 'p':
             report();
             break;
           case 'H':     //  Display help screen
           case 'h':
             help_screen();
             break;
           case 'Q':     //  Quit the program
           case 'q':
             done = true;
             break;
         }
     } 
     while (!done);
 }

