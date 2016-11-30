 #include <iostream>
 #include <iomanip>

 int main() {
     int size;  //  The number of rows and columns in the table
     std::cout << "Please enter the table size: ";
     std::cin >> size;
     //  Print a size x size multiplication table

     //  First, print heading:  1  2  3  4   5   etc.
     std::cout << "    ";
     //  Print column heading
     int column = 1;
     while (column <= size) {
         std::cout << std::setw(4) << column;  //  Print heading for this column.
         column++;
     }
     std::cout << '\n';

     //  Print line separator:   +------------------
     std::cout << "   +";
     column = 1;
     while (column <= size) {
         std::cout << "----";               //  Print line for this column.
         column++;
     }
     std::cout << '\n';

     //  Print table contents
     int row = 1;
     while (row <= size) {             //  Table has size rows.
         std::cout << std::setw(2) << row << " |"; //  Print heading for this row.
         int column = 1;                 //  Reset column for each row.
         while (column <= size) {      //  Table has size columns.
             int product = row*column;   //  Compute product
             std::cout << std::setw(4) << product; //  Display product
             column++;                   //  Next element
         }
         row++;                          //  Next row
         std::cout << '\n';                   //  Move cursor to next row
     }
 }

