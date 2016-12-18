 #include <iostream>
 #include <fstream>
 
 void print(std::ostream& os, int n) {
     os.width(10);  //  Right justified in 10 spaces
     os.fill('*');  //  Fill character is *
     os << n << '\n';
 }
 
 int main() {
     //  Pretty print to screen
     print(std::cout, 35);    
 
     //  Pretty print to text file
     std::ofstream fout("temp.data");
     if (fout.good()) {
         print(fout, 36);
     }
 }

