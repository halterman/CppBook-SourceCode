 #include <iostream>
 #include <vector>
 #include <tuple>
 
 std::pair<int, int> count_neg_nonneg(const std::vector<int>& nums) {
     // Initialize counters
     int neg_count = 0, nonneg_count = 0;
     for (int num : nums)
         if (num < 0)
             neg_count++;
         else
             nonneg_count++;
     return std::make_pair(neg_count, nonneg_count);
 }
 
 int main() {
     auto counts = count_neg_nonneg({8, -3, -1, 7, 7, -2, 0, 3});
     std::cout << counts.first << " " << counts.second << '\n';
      
 } 

