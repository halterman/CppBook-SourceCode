 #include <iostream>
 #include "trafficlight.h"
 
 void print(Trafficlight lt) {
     Trafficlight::SignalColor color = lt.get_color();
     std::cout << "+-----+\n";
     std::cout << "|     |\n";
     if (color == Trafficlight::Red)
         std::cout << "| (R) |\n";
     else
         std::cout << "| ( ) |\n";
     std::cout << "|     |\n";
     if (color == Trafficlight::Yellow)
         std::cout << "| (Y) |\n";
     else
         std::cout << "| ( ) |\n";
     std::cout << "|     |\n";
     if (color == Trafficlight::Green)
         std::cout << "| (G) |\n";
     else
         std::cout << "| ( ) |\n";
     std::cout << "|     |\n";
     std::cout << "+-----+\n";
 }
 
 int main() {
     Trafficlight light(Trafficlight::Green);
     while (true) {
         print(light);
         light.change();
         std::cin.get();
     }
 }

