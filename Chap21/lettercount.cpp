 //  Counts the number of occurrences of each
 //  letter in a text file. 
 
 #include <iostream>
 #include <fstream>
 #include <string>
 #include <vector>     // To store the counters
 #include <cctype>     // For toupper and isalpha
 
 int main(int argc, char *argv[]) {
     if (argc < 2) {
         std::cout << "Usage: wordcount <filename>\n";
         std::cout << " where <filename> is the name of a text file.\n";
     }
     else {  // User provided file name
         std::string filename = argv[1];
         // Make counter vector 26 big, all filled with zeros
         std::vector<int> counters(26, 0); 
         std::ifstream fin(filename);
         if (fin.good()) {     // Open the file for reading
             char ch;
             while (fin >> ch) {
                 //  Capitalize the letter
                 ch = static_cast<char>(toupper(ch));
                 if (isalpha(ch)) // Only count alphabetic characters
                     // Compute offset into counter vector
                     counters[ch - 'A']++;
             }
             // Report the counts for each letter
             ch = 'A';
             for (auto count : counters)
                 std::cout << ch++ << ": " << count << '\n';
         }
     }
 }

