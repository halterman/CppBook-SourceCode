 #include <iostream>
 #include <cctype>

 int main() {
     for (char lower = 'a'; lower <= 'z'; lower++) {
        char upper = toupper(lower);
        std::cout << lower << " => " << upper << '\n';
     }
 }

