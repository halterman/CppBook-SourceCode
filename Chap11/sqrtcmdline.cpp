 #include <iostream>
 #include <sstream>
 #include <cmath>
 
 int main(int argc, char *argv[]) {
     if (argc < 3)
         std::cout << "Supply range of values\n";
     else {
         int start, stop;
         std::stringstream st(argv[1]),
                           sp(argv[2]);
         st >> start;
         sp >> stop;
         for (int n = start; n <= stop; n++)
             std::cout << n << "  " << sqrt(n) << '\n';
     }
 }

