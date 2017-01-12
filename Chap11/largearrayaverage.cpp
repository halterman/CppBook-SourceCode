 #include <iostream>

 // Maximum number of expected values is 1,000,000
 const int MAX_NUMBER_OF_ENTRIES = 1000000;
 double numbers[MAX_NUMBER_OF_ENTRIES];

 int main() {
     double sum = 0.0;
     int size;  // Actual number of entries

     // Get effective size of the array
     std::cout << "Please enter number of values to process: ";
     std::cin >> size;

     if (size > 0) {  // Nothing to do with no entries
         std::cout << "Please enter " << size << " numbers: ";
         // Allow the user to enter in the values.
         for (int i = 0;  i < size;  i++) {
             std::cin >> numbers[i];
             sum += numbers[i];
         }
         std::cout << "The average of ";
         for (int i = 0;  i < size - 1;  i++) 
             std::cout << numbers[i] << ", ";
         // No comma following last element
         std::cout << numbers[size - 1] << " is " 
                   << sum/size << '\n';
     }
 }

