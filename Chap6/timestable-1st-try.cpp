 #include <iostream>

 int main() {
     int size;  //  The number of rows and columns in the table
     std::cout << "Please enter the table size: ";
     std::cin >> size;
     //  Print a size x size multiplication table
     int row = 1;
     while (row <= size) {           //  Table has 10 rows.
         std::cout << "Row #" << row << '\n';
         row++;                        //  Next row
     }
 }

