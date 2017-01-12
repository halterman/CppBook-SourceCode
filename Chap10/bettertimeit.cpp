 #include <iostream>
 #include "timermodule.h"  // Out timer module

 int main() {
     char letter;
     std::cout << "Enter a character: ";
     start_timer();    // Start timing
     std::cin >> letter;
     stop_timer();     // Stop timing
     std::cout << elapsed_time() << " seconds" << '\n';
 }

