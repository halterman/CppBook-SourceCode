 //  File file_io.cpp
 
 #include <iostream>
 #include <fstream>
 #include <string>
 #include <vector>
 
 /*
  *  print_vector(v)
  *    Prints the contents of vector v.
  *    v is a vector holding integers.
  */
 void print_vector(const std::vector<int>& vec) {
     std::cout << "{";
     int len = vec.size();
     if (len > 0) {
         for (int i = 0; i < len - 1;  i++)
             std::cout << vec[i] << ",";  // Comma after elements
         std::cout << vec[len - 1];  //  No comma after last element
     }
     std::cout << "}\n";
 }
 
 /*
  *  save_vector(filename, v)
  *    Writes the contents of vector v.
  *    filename is name of text file created.  Any file
  *    by that name is overwritten.
  *    v is a vector holding integers.  v is unchanged by the
  *    function.
  */
 void save_vector(const std::string& filename, const std::vector<int>& vec) {
     // Open a text file for writing
     std::ofstream out(filename);
     if (out.good()) {  //  Make sure the file was opened properly
         int n = vec.size();
         for (int i = 0; i < n;  i++)
             out << vec[i] << " ";   //  Space delimited
         out << '\n';
     }
     else
         std::cout << "Unable to save the file\n";
 }
 
 /*
  *  load_vector(filename, v)
  *    Reads the contents of vector v from text file
  *    filename.  v's contents are replaced by the file's
  *    contents.  If the file cannot be found, the vector v
  *    is empty.
  *    v is a vector holding integers.
  */
 void load_vector(const std::string& filename, std::vector<int>& vec) {
     // Open a text file for reading
     std::ifstream in(filename);
     if (in.good()) {  //  Make sure the file was opened properly
         vec.clear();  //  Start with empty vector
         int value;
         while (in >> value)  //  Read until end of file
             vec.push_back(value);
     }
     else
         std::cout << "Unable to load in the file\n";
 }
 
 int main() {
     std::vector<int> list;
     bool done = false;
     char command;
     while (!done) {
         std::cout << "I)nsert <item> P)rint "
                   << "S)ave <filename> L)oad <filename> "
                   << "E)rase Q)uit: ";
         std::cin >> command;
         int value;
         std::string filename;
         switch (command) {
           case 'I':
           case 'i':
             std::cin >> value;
             list.push_back(value);
             break;
           case 'P':
           case 'p':
             print_vector(list);
             break;
           case 'S':
           case 's':
             std::cin >> filename;
             save_vector(filename, list);
             break;
           case 'L':
           case 'l':
             std::cin >> filename;
             load_vector(filename, list);
             break;
           case 'E':
           case 'e':
             list.clear();
             break;
           case 'Q':
           case 'q':
             done = true;
             break;
         }
     }
 }

