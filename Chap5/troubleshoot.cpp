 #include <iostream>

 int main() {
     std::cout << "Help!  My computer doesn't work!\n";
     char choice;
     std::cout << "Does the computer make any sounds "
               << "(fans, etc.) or show any lights? (y/n):";
     std::cin >> choice;
     // The troubleshooting control logic
     if (choice == 'n') { // The computer does not have power
         std::cout << "Is it plugged in? (y/n):";
         std::cin >> choice;
         if (choice == 'n') { // It is not plugged in, plug it in
             std::cout << "Plug it in.  If the problem persists, "
                       << "please run this program again.\n";
         } 
         else { // It is plugged in
             std::cout << "Is the switch in the \"on\" position? (y/n):";
             std::cin >> choice;
             if (choice == 'n') { // The switch is off, turn it on!
                 std::cout << "Turn it on.  If the problem persists, "
                           << "please run this program again.\n";
             } 
             else { // The switch is on
                 std::cout << "Does the computer have a fuse?  (y/n):";
                 std::cin >> choice;
                 if (choice == 'n') { // No fuse
                     std::cout << "Is the outlet OK? (y/n):";
                     std::cin >> choice;
                     if (choice == 'n') { // Fix outlet
                         std::cout << "Check the outlet's circuit "
                                   << "breaker or fuse.  Move to a "
                                   << "new outlet, if necessary. "
                                   << "If the problem persists, "
                                   << "please run this program again.\n";
                     } 
                     else { // Beats me!
                         std::cout << "Please consult a service "
                                   << "technician.\n";
                     }
                 } 
                 else { // Check fuse
                     std::cout << "Check the fuse. Replace if "
                               << "necessary.  If the problem "
                               << "persists, then "
                               << "please run this program again.\n";
                 }
             }
         }
     } 
     else { // The computer has power
         std::cout << "Please consult a service technician.\n";
     }
 }

