 //  File permuteabc.cpp
 
 #include <iostream>
 
 int main() {
     char first = 'A';        //  The first letter varies from A to C
     while (first <= 'C') {
         char second = 'A'; 
         while (second <= 'C') { //  The second varies from A to C
             if (second != first) {  //  No duplicate letters
                 char third = 'A';
                 while (third <= 'C') { //  The third varies from A to C
                     //  Don't duplicate first or second letter
                     if (third != first && third != second)
                         std::cout << first << second << third << '\n';
                     third++;
                 }
             }
             second++;
         }
         first++;
     }
 }

