 //  File timeconvcond1.cpp
 
 #include <iostream>
 
 int main() {
     //  Some useful conversion constants
     const int SECONDS_PER_MINUTE = 60,
               SECONDS_PER_HOUR   = 60*SECONDS_PER_MINUTE;  //  3600
     int hours, minutes, seconds;
     std::cout << "Please enter the number of seconds:";
     std::cin >> seconds;
     //  First, compute the number of hours in the given number
     //  of seconds
     hours = seconds / SECONDS_PER_HOUR;  //  3600 seconds = 1 hours
     //  Compute the remaining seconds after the hours are
     //  accounted for
     seconds = seconds % SECONDS_PER_HOUR;
     //  Next, compute the number of minutes in the remaining
     //  number of seconds
     minutes = seconds / SECONDS_PER_MINUTE;  //  60 seconds = 1 minute
     //  Compute the remaining seconds after the minutes are
     //  accounted for
     seconds = seconds % SECONDS_PER_MINUTE;
     //  Report the results
     if (hours > 0) {    //  Print hours at all?
         std::cout << hours;
         // Decide between singular and plural form of hours
         if (hours == 1)
            std::cout << " hour ";
         else
            std::cout << " hours ";
     }
     if (minutes > 0) {   //  Print minutes at all?
         std::cout << minutes;
         // Decide between singular and plural form of minutes
         if (minutes == 1)
             std::cout << " minute ";
         else
             std::cout << " minutes ";
     }
     //  Print seconds at all?
     if (seconds > 0 || (hours == 0 && minutes == 0 && seconds == 0)) {
         std::cout << seconds;
         // Decide between singular and plural form of seconds
         if (seconds == 1)
             std::cout << " second";
         else
             std::cout << " seconds";
     }
     std::cout << '\n';
 }

