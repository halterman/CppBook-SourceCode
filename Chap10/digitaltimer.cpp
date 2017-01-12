 #include <iostream>
 #include <iomanip>
 #include <ctime>

 // Some conversions from seconds
 const clock_t SEC_PER_MIN = 60,                  // 60 sec  =  1 min
               SEC_PER_HOUR = 60 * SEC_PER_MIN,   // 60 min  =  1 hr
               SEC_PER_DAY = 24 * SEC_PER_HOUR;   // 24 hr   = 24 hr

 /*
  *  print_time
  *     Displays the time in hr:min:sec format
  *     seconds is the number of seconds to display
  */

 void print_time(clock_t seconds) {
     clock_t hours = 0, minutes = 0;

     // Prepare to display time =============================
     std::cout << '\n';
     std::cout << "     ";

     // Compute and display hours ===========================
     hours = seconds/SEC_PER_HOUR;
     std::cout << std::setw(2) << std::setfill('0') << hours << ":";

     // Remove the hours from seconds
     seconds %= SEC_PER_HOUR;

     // Compute and display minutes =========================
     minutes = seconds/SEC_PER_MIN;
     std::cout << std::setw(2) << std::setfill('0') << minutes << ":";
     // Remove the minutes from seconds
     seconds %= SEC_PER_MIN;

     // Compute and display seconds =========================
     std::cout << std::setw(2) << std::setfill('0') << seconds << '\n';
 }

 int main() {
     clock_t start = clock();      // Record starting time
     clock_t elapsed = (clock() - start)/CLOCKS_PER_SEC, // Elapsed time in sec.
             previousElapsed = elapsed;
     // Counts up to 24 hours (1 day), then stops
     while (elapsed < SEC_PER_DAY) {
         // Update the display only every second
         if (elapsed - previousElapsed >= 1) {
             // Remember when we last updated the display
             previousElapsed = elapsed;
             print_time(elapsed);
         }
         // Update elapsed time
         elapsed = (clock() - start)/CLOCKS_PER_SEC;
     }
 }

