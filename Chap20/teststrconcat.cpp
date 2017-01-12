 #include <iostream>
 #include <vector>
 #include <string>
 #include <algorithm>
 #include <numeric>
 #include <iterator>
 #include <random>
 #include <ctime>
 
 // Uniform pseudorandom number generator from an earlier chapter
 #include "uniformrandom.h"
 
 // Some global resources
 
 // Valid characters in our words
 const std::string character_set = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
 // Our words will contain 1-8 letters
 UniformRandomGenerator word_len_gen(1, 8);
 // We will select from a random index in character_set
 UniformRandomGenerator char_chooser_gen(0, 25);
 
 std::string make_random_string() {
     std::string result = "";
     int size = word_len_gen();  // Length of this word
     for (int i = 0; i < size; i++)
         result += character_set[char_chooser_gen()];
     return result;
 }
 
 std::vector<std::string> make_random_string_vector(int size) {
     std::vector<std::string> result(size);
     for (auto& elem : result)
         elem = make_random_string();
     return result;
 }
 
 std::string concat1(const std::vector<std::string>& words) {
     return std::accumulate(std::begin(words), std::end(words), 
               std::string(""), 
               [](std::string a, std::string b) { return a + b; });
 }
 
 std::string concat2(const std::vector<std::string>& words) {
     std::string joined = "";
     for (const std::string& word : words)
         joined += word;
     return joined;
 }
 
 int main() {
     auto words = make_random_string_vector(25);
 
     copy(std::begin(words), std::end(words),
                std::ostream_iterator<std::string>(std::cout, " "));
     std::cout << '\n';
 
     std::cout << "========================\n";
     clock_t start_time, stop_time;
     start_time = clock();
     auto s = concat1(words);
     std::cout << s << '\n';
     stop_time = clock();
     std::cout << "Accumulate: " << stop_time - start_time << " msec\n";
     std::cout << "------------------------\n";
     start_time = clock();
     s = concat2(words);
     std::cout << s << '\n';
     stop_time = clock();
     std::cout << "for loop:   " << stop_time - start_time << " msec\n";
 }

