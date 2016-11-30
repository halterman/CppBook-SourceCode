 #include <iostream>
 #include <vector>
 #include <ctime>
 #include <cstdlib>
 
 /*
  *  print
  *     Prints the contents of an int vector
  *     a is the vector to print; a is not modified
  */
 void print(const std::vector<int>& a) {
     int n = a.size();
     std::cout << "{";
     if (n > 0) {
         std::cout << a[0];  //  Print the first element
         for (int i = 1; i < n; i++)
             std::cout << ',' << a[i];  //  Print the rest
     }
     std::cout << "}";
 }
 
 /*  
  *  Returns a pseudorandom number in the range begin...end - 1,
  *  inclusive.  Returns 0 if begin >= end.
  */
 int random(int begin, int end) {
     if (begin >= end)
         return 0;
     else {
         int range = end - begin;
         return begin + rand()%range;
     }
 }
 
 /*
  *  Randomly permute a vector of integers.
  *  a is the vector to permute, and n is its length.
  */
 void permute(std::vector<int>& a) {
     int n = a.size();
     for (int i = 0; i < n - 1; i++) {   
         //  Select a pseudorandom location from the current
         //  location to the end of the collection
         std::swap(a[i], a[random(i, n)]);
     }
 }
 
 // Tests the permute function that randomly permutes the
 // contents of a vector
 int main() {
     //  Initialize random generator seed
     srand(static_cast<int>(time(0)));
 
     //  Make the vector {1,2,3,4,5,6,7,8}
     std::vector<int> vec { 1, 2, 3, 4, 5, 6, 7, 8 };
 
     //  Print vector before
     print(vec);
     std::cout << '\n';
 
     permute(vec);
     
     //  Print vector after
     print(vec);
     std::cout << '\n';
 }

