 #include <iostream>

 int main() {
     std::cout << "Please enter the month and day as numbers: ";
     int month, day;
     std::cin >> month >> day;
     // Translate month into English
     if (month == 1) 
         std::cout << "January";
     else if (month == 2) 
         std::cout << "February";
     else if (month == 3) 
         std::cout << "March";
     else if (month == 4) 
         std::cout << "April";
     else if (month == 5) 
         std::cout << "May";
     else if (month == 6) 
         std::cout << "June";
     else if (month == 7) 
         std::cout << "July";
     else if (month == 8) 
         std::cout << "August";
     else if (month == 9) 
         std::cout << "September";
     else if (month == 10)
         std::cout << "October";
     else if (month == 11) 
         std::cout << "November";
     else 
         std::cout << "December";
     // Add the day
     std::cout << " " << day << " or " << day << " de ";
     // Translate month into Spanish
     if (month == 1)
         std::cout << "enero";
     else if (month == 2)
         std::cout << "febrero";
     else if (month == 3)
         std::cout << "marzo";
     else if (month == 4)
         std::cout << "abril";
     else if (month == 5)
         std::cout << "mayo";
     else if (month == 6)
         std::cout << "junio";
     else if (month == 7)
         std::cout << "julio";
     else if (month == 8)
         std::cout << "agosto";
     else if (month == 9)
         std::cout << "septiembre";
     else if (month == 10)
         std::cout << "octubre";
     else if (month == 11)
         std::cout << "noviembre";
     else
         std::cout << "diciembre";
     std::cout << '\n';
 }

