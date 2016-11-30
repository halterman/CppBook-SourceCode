 #include <iostream>
 #include <string>
 
 int main() {
     std::string word = "";         // Initial word to ensure loop entry
     while (word != "quit") {  // Loop until user presses return by itself
         // Obtain word from the user
         std::cout << "Enter Spanish word: ";
         std::cin >> word;
         if (word == "uno")
             std::cout << "one\n";
         else if (word == "dos")
             std::cout << "two\n";
         else if (word == "tres")
             std::cout << "three\n";
         else if (word == "cuatro")
             std::cout << "four\n";
         else if (word == "cinco")
             std::cout << "five\n";
         else if (word == "seis")
             std::cout << "six\n";
         else if (word == "siete")
             std::cout << "seven\n";
         else if (word == "ocho")
             std::cout << "eight\n";
         else    // Unknown word
             std::cout << "???\n";
     }
 }

