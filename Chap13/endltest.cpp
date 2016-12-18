 #include <iostream>
 #include <fstream>
 #include <ctime>
 #include <vector>
 #include <cstdlib>
 
 // Make a convenient alias for the long type name
 using Sequence = std::vector<int>;
 
 Sequence make_random_sequence(int size, int max) {
     Sequence result(size);
     for (int i = 0; i < size; i++)
         result[i] = rand() % max;
     return result;
 }
 
 void print_with_endl(const Sequence& vs, std::ostream& out) {
     for (auto elem : vs)
         out << elem << std::endl;
 }
 
 void print_with_n(const Sequence& vs, std::ostream& out) {
     for (auto elem : vs)
         out << elem << '\n';
 }
 
 int main() {
     // Sequence up to 100,000 elements, with each element < 100.
     auto seq = make_random_sequence(100000, 100);

     // Time writing the elements to the console with std::endl newlines
     clock_t start_time = clock();
     print_with_endl(seq, std::cout);
     unsigned elapsed1 = clock() - start_time;
 

     // Time writing the elements to the console with '\n' newlines
     start_time = clock();
     print_with_n(seq, std::cout);
     unsigned elapsed2 = clock() - start_time;
 
     // Time writing the elements to a text file with std::endl newlines
     std::ofstream fout("temp.out"); 
     start_time = clock();
     print_with_endl(seq, fout);
     fout.close();
     unsigned elapsed3 = clock() - start_time;
 
     // Reopen the file for writing
     fout.open("temp.out"); 
     // Time writing the elements to a text file with '\n' newlines
     start_time = clock();
     print_with_n(seq, fout);
     fout.close();
     unsigned elapsed4 = clock() - start_time;
 
     std::cout << "With std::endl (console): " << elapsed1 << '\n';
     std::cout << "With '\\n' (console):     " << elapsed2 << '\n';
     std::cout << "With std::endl (file):    " << elapsed3 << '\n';
     std::cout << "With '\\n' (file):        " << elapsed4 << '\n';
 } 

