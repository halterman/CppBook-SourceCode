 //  Uses a vector to group words in a document by their length.
 
 #include <iostream>
 #include <fstream>
 #include <string>
 #include <vector>
 #include <set>
 #include <algorithm>
 #include <cctype>
 
 
 // Conveniently send to an output stream a set of any printable type
 template<typename T>
 std::ostream& operator<<(std::ostream& os, const std::set<T>& s) {
     os << '{';
     auto iter = std::begin(s);      // iter points to first element initially
     const auto iend  = std::end(s); // iend always points just past the end
     if (iter != iend)          // Set empty?
         os << *iter++;         // No?  Print first element
     while (iter != iend)       // More left?
         os << ", " << *iter++; // Print element, comma, move to next element
     os << '}';
     return os;
 }
 
 const size_t MAX_WORD_LENGTH = 20;
 
 int main(int argc, char *argv[]) {
     if (argc < 2) {
         std::cout << "Usage: wordgroup <filename>\n";
         std::cout << " where <filename> is the name of a text file.\n";
     }
     else {  // User provided file name
         std::string filename = argv[1];
         // Make a grouping map of sets
         std::vector<std::set<std::string>> groups(MAX_WORD_LENGTH); 
         std::ifstream fin(filename);
         if (fin.good()) {     // Open the file for reading
             std::string word;
             while (fin >> word) {
                 //  Capitalize all the letters in the word
                 std::transform(std::begin(word), std::end(word), 
                                std::begin(word), toupper);
                 //  Add word to appropriate et based on the word's length
                 if (word.length() > MAX_WORD_LENGTH)
                     std::cout << "Ignoring word, too long" << '\n';
                 groups[word.length()].insert(word);
             }
             // Report the counts for each word
             for (size_t i = 1; i < groups.size(); i++)
                 std::cout << i << ":" << groups[i] << '\n';
         }
     }
 }

