 #include <iostream>
 #include <vector>
 
 int main() {
     //  Declare a vector of ten numbers
     std::vector<double> vec(10);
 
     //  Allow the user to populate the vector
     std::cout << "Please enter 10 numbers: ";
     for (double& elem : vec)
         std::cin >> elem;
 
     //  Print the vector's contents
     for (double elem : vec)
         std::cout << elem << '\n';
 }

