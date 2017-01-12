 // File enhancedtimeconv.cpp
 
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
     std::cout << hours << ":";
     // Compute tens digit of minutes
     int tens = minutes / 10;
     std::cout << tens;
     // Compute ones digit of minutes
     int ones = minutes % 10;
     std::cout << ones << ":";
     // Compute tens digit of seconds
     tens = seconds / 10;
     std::cout << tens;
     // Compute ones digit of seconds
     ones = seconds % 10;
     std::cout << ones << '\n';
 }

