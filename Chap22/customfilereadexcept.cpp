 #include <iostream>
 #include <fstream>
 #include <vector>
 #include <string>
 
 // Exception object to thrown when a client attempts to 
 // open a text file via a name that does correspond to a 
 // file in the current working directory.
 class FileNotFoundException : public std::exception {
     std::string message;  // Identifies the exception and filename
   public:
     // Constructor establishes the exception object's message
     FileNotFoundException(const std::string& fname):
         message("File \"" + fname + "\" not found") {}

     // Reveal message to clients
     const char *what() const {
         return message.c_str();
     }
 };

 // Creates and returns a vector of integers from data stored
 // in a text file.
 // filename: the name of the text file containing the data
 // Returns a vector containing the data in the file, if possible
 std::vector<int> load_vector(const std::string& filename) {
     std::ifstream fin(filename);     // Open the text file for reading
     if (fin.good()) {                // Did the file open successfully?
         std::vector<int> result;     // Initially empty vector
         int n;
         fin >> n;                    // Size of data set
         for (int i = 0; i < n; i++ ) { 
             int value;      
             fin >> value;            // Read in a data value
             result.push_back(value); // Append it to the vector
         }
         return result;               // Return the populated vector
     }
     else   // Could not open the text file
         throw FileNotFoundException(filename);

 }
 
 int main() {
     try {
         std::vector<int> numbers = load_vector("values.data");
         for (int value : numbers) 
             std::cout << value << ' ';
         std::cout << '\n';
     }
     catch (std::exception& e) {
         std::cout << e.what() << '\n';
     }
 }

