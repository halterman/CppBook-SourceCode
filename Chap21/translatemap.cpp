 #include <iostream>
 #include <fstream>
 #include <string>
 #include <map>
 #include <algorithm>
 
 // Convenient type name alias
 using Dictionary = std::map<std::string, std::string>;
 
 // English-Spanish word list
 Dictionary word_map; 
 
 // Load the list of words from a file
 void load_words(std::string filename, Dictionary& words) {
     std::ifstream in(filename);
     if (in.good()) {  //  Make sure the file was opened properly
         std::string english_word, spanish_word;
         while (in >> spanish_word >> english_word) // Read until end of file
             words[spanish_word] = english_word;
     }
     else
         std::cout << "Unable to load in the file\n";
 }
 
 int main() {
     // Load words from file
     load_words("engspanwords.txt", word_map);
 
     std::string word = "";
     while (word != "quit") {  // Loop until user presses return by itself
         // Obtain word from the user
         std::cout << "Enter Spanish word: ";
         std::cin >> word;
         std::cout << word << ": " << word_map[word] << '\n';
     }
 }

