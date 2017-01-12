 // File timeconv.cpp
 
 #include <iostream>
 
 int main() {
     int hours, minutes, seconds;
     std::cout << "Please enter the number of seconds:";
     std::cin >> seconds;
     // First, compute the number of hours in the given number
     // of seconds
     hours = seconds / 3600;  // 3600 seconds = 1 hours
     // Compute the remaining seconds after the hours are
     // accounted for
     seconds = seconds % 3600;
     // Next, compute the number of minutes in the remaining
     // number of seconds
     minutes = seconds / 60;  // 60 seconds = 1 minute
     // Compute the remaining seconds after the minutes are
     // accounted for
     seconds = seconds % 60;
     // Report the results
     std::cout << hours << " hr, " << minutes << " min, "
               << seconds << " sec\n";
 }

