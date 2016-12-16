 //  File permuteabcd.cpp
 
 #include <iostream>
 
 int main() {
   for (char first = 'A'; first <= 'D'; first ++)
     for (char second = 'A'; second <= 'D'; second++)
       if (second != first)  //  No duplicate letters
         for (char third = 'A'; third <= 'D'; third++)
           if (third != first && third != second)
              for (char fourth = 'A'; fourth <= 'D'; fourth++)
                 if (fourth != first && fourth != second && fourth != third)
                     std::cout << first << second << third << fourth << '\n';
 }

