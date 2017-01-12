 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <numeric>
 
 int main() {
     const int SIZE = 20;
 
     // Make a vector of SIZE integers 
     std::vector<int> seq(SIZE);
     // Populate the vector with 0, 1, 2, 3, ..., SIZE - 1
     std::iota(std::begin(seq), std::end(seq), 0);
 
     // Display the vector
     std::for_each(std::begin(seq), std::end(seq), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
 
     // Make a vector large enough to hold the copied values
     std::vector<int> seq2(SIZE);
 
     // Copy the seq to seq2
     std::copy(std::begin(seq), std::end(seq), std::begin(seq2));
 
     // Display seq2
     std::for_each(std::begin(seq2), std::end(seq2), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
 
     // Make a vector large enough to hold the transformed values
     std::vector<int> seq3(SIZE);
 
     // Copy the seq to seq3
     std::transform(std::begin(seq), std::end(seq), std::begin(seq3),
                    [](int n) { return 2*n; });
 
     // Display seq3
     std::for_each(std::begin(seq3), std::end(seq3), 
                   [](int x) { std::cout << x << ' '; });
     std::cout << '\n';
 }

