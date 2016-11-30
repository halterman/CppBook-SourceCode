 #include <iostream>
 #include <fstream>
 
 //  Sum the values the user enters
 int main() {
     int input = 0, sum = 0;
     //  Enable exceptions in the cin object
     std::cin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
     std::cout << "Please enter integers to sum, 999 ends list: ";
     while (input != 999) {
         try {
             std::cin >> input;   //  Watch for faulty (non-integer) input
             if (input != 999)
                 sum += input; //  Do not not include the terminating 999
         }
         catch (std::exception& e) {
             std::cout << "****Non-integer input detected\n";
             //cin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
             std::cin.clear();  //  Clear I/O error
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
             //std::cout << e.what() << '\n';
         }
     }
     std::cout << "Sum = " << sum << '\n';
 }

