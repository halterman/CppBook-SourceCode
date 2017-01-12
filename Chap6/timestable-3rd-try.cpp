 #include <iostream>
 #include <iomanip>

 int main() {
     int size;  // The number of rows and columns in the table
     std::cout << "Please enter the table size: ";
     std::cin >> size;
     // Print a size x size multiplication table
     int row = 1;
     while (row <= size) {             // Table has size rows.
         int column = 1;                 // Reset column for each row.
         while (column <= size) {      // Table has size columns.
             int product = row*column;   // Compute product
             std::cout << std::setw(4) << product; // Display product
             column++;                   // Next element
         }
         std::cout << '\n';                   // Move cursor to next row
         row++;                          // Next row
     }
 }

