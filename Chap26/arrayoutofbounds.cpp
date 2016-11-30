 #include <iostream>

 int main() {
     const int SIZE = 3;
     int a[SIZE] = { 5, 5, 5 };
     //  Print the contents of the array
     std::cout << "a contains ";
     for (int i = 0; i < SIZE; i++) 
         std::cout << a[i] << " ";
     std::cout << '\n';
     //  Change all the 5s in array a to 8s
     for (int i = 0; i <= SIZE; i++)   // Bug: <= should be < 
         a[i] = 8;
     //  Reprint the contents of the array
     std::cout << "a contains ";
     for (int i = 0; i < SIZE; i++) 
         std::cout << a[i] << " ";
     std::cout << '\n';
 }

