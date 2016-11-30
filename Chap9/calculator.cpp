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
  *  main
  *     Runs a command loop that allows users to
  *     perform simple arithmetic.
  */
 int main() {
     double result = 0.0, arg1, arg2;
     bool done = false;  //  Initially not done
     do {
         switch (menu()) {
           case 'A':     //  Addition
           case 'a':
             std::cin >> arg1 >> arg2;
             result = arg1 + arg2;
             std::cout << result << '\n';
             break;
           case 'S':     //  Subtraction
           case 's':
             std::cin >> arg1 >> arg2;
             result = arg1 - arg2;
             //  Fall through, so it prints the result
           case 'P':     //  Print result
           case 'p':
             std::cout << result << '\n';
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

