 #include <iostream>
 #include <iomanip>
 
 const int ROWS = 3,
           COLUMNS = 5;
 
 //  The name Matrix represents a new type
 //  that means a ROWS x COLUMNS 
 //  two-dimensional array of double-precision
 //  floating-point numbers.
 using Matrix = double[ROWS][COLUMNS];
 
 //  Allow the user to enter the elements of a matrix
 void populate_matrix(Matrix m) {
     std::cout << "Enter the " << ROWS << " rows of the matrix.\n";
     for (int row = 0; row < ROWS; row++) {
         std::cout << "Row #" << row << " (enter " << COLUMNS << " values):";
         for (int col = 0; col < COLUMNS; col++)
             std::cin >> m[row][col];
     }
 }
 
 void print_matrix(const Matrix m) {
     for (int row = 0; row < ROWS; row++) {
         for (int col = 0; col < COLUMNS; col++)
             std::cout << std::setw(5) << m[row][col];
         std::cout << '\n';
     }
 }
 
 int main() {
     //  Declare the 2D array
     Matrix mat;  
     //  Populate the array
     populate_matrix(mat);
     //  Print the array
     print_matrix(mat);
 }

