 #include <fstream>
 #include <vector>
 #include <iterator>
 
 int main() {
     std::vector<int> vec { 10, 20, 30, 35, 40, 45, 50, 55 };
 
     // Open a text file for writing
     std::ofstream fout("output.txt");
 
     if (fout.good()) {  // Confirm the file is ready to receive output
         // Copy the contents of the container to a text file, 
         // separating elements with a single space
         auto strm = std::ostream_iterator<int>(fout, " ");
         std::copy(std::begin(vec), std::end(vec), strm);
         fout << '\n';
     }
 }

