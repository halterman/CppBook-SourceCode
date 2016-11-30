 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 int main() {
     // Make a vector of SIZE integers 
     std::vector<int> seq { 2, 3, 4, 5, 6 };
 
     // Display seq
     std::for_each(std::begin(seq), std::end(seq), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
 
     // Make a copy of vec with the first and last element trimmed off
     if (seq.size() >= 2) {
         // Make a vector large enough to hold trimmed values
         std::vector<int> seq2(seq.size() - 2);
         std::copy(std::begin(seq) + 1, std::end(seq) - 1, 
                   std::begin(seq2));
         // Display seq2
         std::for_each(std::begin(seq2), std::end(seq2), 
                       [](int x) { std::cout << x << ' '; });
         std::cout << '\n';
     }
 }

