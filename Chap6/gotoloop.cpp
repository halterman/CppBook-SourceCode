 #include <iostream>

 int main() {
     int count = 1;              // Initialize counter
 top:
     if (count > 5) 
         goto end;
     std::cout << count << '\n';  // Display counter, then
     count++;                // Increment counter
     goto top;
 end:
     ;   // Target is an empty statement
 }

