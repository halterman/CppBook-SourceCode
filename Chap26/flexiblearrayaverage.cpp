 #include <iostream>

 int main() {
     double sum = 0.0;
     double *numbers;  //  Note: numbers is a pointer, not an array
     int size;  //  Actual number of entries

     //  Get effective size of the array
     std::cout << "Please enter number of values to process: ";
     std::cin >> size;

     if (size > 0) {  //  Nothing to do with no entries
         std::cout << "Please enter " << size << " numbers: ";
         //  Allocate the exact size needed
         numbers = new double[size];  //  Dynamically allocated array
         //  Allow the user to enter in the values.
         for (int i = 0;  i < size;  i++) {
             std::cin >> numbers[i];
             sum += numbers[i];
         }
         std::cout << "The average of ";
         for (int i = 0;  i < size - 1;  i++) 
             std::cout << numbers[i] << ", ";
         //  No comma following last element
         std::cout << numbers[size - 1] << " is " 
              << sum/size << '\n';
         delete [] numbers;  //  Free up the space held by numbers
     }
 }

