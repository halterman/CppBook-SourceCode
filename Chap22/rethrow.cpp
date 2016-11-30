 #include <iostream>
 #include <fstream>
 #include <vector>
 
 void filter(std::vector<int>& v, int i) {
     v.at(i)++;
 }
 
 void compute(std::vector<int>& a) {
     for (int i = 0; i < 6; i++) {
         try {
             filter(a, i);
         }
         catch (std::exception& ex) {
             std::cout << "********************************\n";
             std::cout << "* For loop terminated prematurely\n";
             std::cout << "* when i = " << i << '\n';
             std::cout << "********************************\n";
             throw ex;  //  Rethrow the same exception
         }
     }
 }
  
 int main() {
        std::vector<int> list { 10, 20, 30, 40, 50 };
        try {
            compute(list);
        }
        catch (std::exception& e) {
            std::cout << "Caught an exception: " << e.what() << '\n';
        }
        std::cout << "Program finished\n";
 }

