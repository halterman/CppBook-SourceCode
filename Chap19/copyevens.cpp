 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <iterator>
 
 int main() {
     // Make a vector of SIZE integers 
     std::vector<int> seq { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
 
     auto output = std::ostream_iterator<int>(std::cout, " ");
 
     // Display seq
     std::copy(std::begin(seq), std::end(seq), output);
     std::cout << '\n';
 
     // A function to test for evenness
     auto is_even = [](int n) { return n % 2 == 0; };
 
     // Count the number of even integers in seq
     int even_count = count_if(std::begin(seq), std::end(seq), is_even);
 
     // Make a copy of vec omitting all the odd numbers
     std::vector<int> seq2(even_count);
     std::copy_if(std::begin(seq), std::end(seq), std::begin(seq2), is_even);
     // Display seq2
     copy(std::begin(seq2), std::end(seq2), output);
     std::cout << '\n';
 }

