 /*
  *  Counts up from zero.  The user continues the count by entering
  *  'Y'.  The user discontinues the count by entering 'N'.
  */

 #include <iostream>


 int main() {
     char input;         //  The users choice
     int count = 0;      //  The current count
     bool done = false;  //  We are not done

     while (!done) {

         //  Print the current value of count
         std::cout << count << '\n';
         std::cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
         std::cin >> input;
         //  Check for "bad" input
         if (input != 'Y' && input != 'y' && input != 'N' && input != 'n')
             std::cout << "\"" << input << "\"" 
                       << " is not a valid choice" << '\n';
         else if (input == 'Y' || input == 'y')
             count++;    //  Keep counting
         else if (input == 'N' || input == 'n')
             done = true;  //  Quit the loop
     }
 } 

