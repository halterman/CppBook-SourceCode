 #include <iostream>
 #include <fstream>
 #include <vector>
 
 int main() {
     try {
         std::ifstream fin("data.dat");
         if (fin.good()) {
             int n;
             fin >> n;   // Size of dataset
             std::vector<int> data(n);  // Allocate vector
             for (int i = 0; i <= n; i++ ) { // Error: should be <
                 int value;
                 fin >> value;
                 data.at(i) = value;
             }
             // Print the values
             for (auto value : data) 
                 std::cout << value << ' ';
             std::cout << '\n';
 
         }
         else
             std::cout << "File does not exist\n";
     }
     catch (std::exception& e) {
         std::cout << e.what() << '\n';
     }
 }

