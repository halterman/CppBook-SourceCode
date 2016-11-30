 #include <iostream>

 int main() {
     int value;
     std::cout << "Please enter an integer in the range 0...5: ";
     std::cin >> value;
     switch (value) {
       case 0: 
         std::cout << "zero"; 
         break;
       case 1: 
         std::cout << "one"; 
         break;
       case 2: 
         std::cout << "two"; 
         break;
       case 3: 
         std::cout << "three"; 
         break;
       case 4: 
         std::cout << "four"; 
         break;
       case 5: 
         std::cout << "five"; 
         break;
       default:
         if (value < 0) 
             std::cout << "Too small";
         else
             std::cout << "Too large";
         break;
     }
     std::cout << '\n';
 }

