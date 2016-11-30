 #include <iostream>

 int main() {
     double n1, n2, n3, n4, n5;
     std::cout << "Please enter five numbers: ";
     //  Allow the user to enter in the five values.
     std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
     std::cout << "The average of " << n1 << ", " << n2 << ", " 
          << n3 << ", " << n4 << ", " << n5 << " is " 
          << (n1 + n2 + n3 + n4 + n5)/5 << '\n';
 }

