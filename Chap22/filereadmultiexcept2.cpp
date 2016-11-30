 #include <iostream>
 #include <fstream>
 #include <vector>
 #include <string>
 
 //  Exception object to thrown when a client attempts to 
 //  open a text file via a name that does correspond to a 
 //  file in the current working directory.
 class FileNotFoundException : public std::exception {
     std::string message;  //  Identifies the exception and filename
   public:
     //  Constructor establishes the exception object's message
     FileNotFoundException(const std::string& fname):
         message("File \"" + fname + "\" not found") {}

     //  Reveal message to clients
     const char *what() const {
         return message.c_str();
     }
 };

 //  Creates and returns a vector of integers from data stored
 //  in a text file.
 //  filename: the name of the text file containing the data
 //  Returns a vector containing the data in the file, if possible
 std::vector<int> load_vector(const std::string& filename) {
     std::ifstream fin(filename);         //  Open the text file for reading
     if (fin.good()) {               //  Did the file open successfully?
         int n;
         fin >> n;                   //  Size of data set
         std::vector<int> result(n);      //  Allocate space for the vector
         int value, i = 0;      
         while (fin >> value)
             result.at(i++) = value;   //  Append it to the vector
         fin.close();                //  Close the file
         return result;              //  Return the populated vector
     }
     else   //  Could not open the text file
         throw FileNotFoundException(filename);

 }
 
 int main() {
     try {
         std::vector<int> numbers = load_vector("values.data");
         for (int value : numbers) 
             std::cout << value << ' ';
         std::cout << '\n';
     }
     catch (std::out_of_range& e) {
         std::cout << "Error: vector bounds exceeded\n";
         std::cout << e.what() << '\n';
     }
     catch (FileNotFoundException& e) {
         std::cout << "Error: cannot open file\n";
         std::cout << e.what() << '\n';
     }
 }

