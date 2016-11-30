 #include "trafficsignal.h"
 
 //  Ensures a traffic light object is in the state of
 //  red, green, or yellow.  A rogue integer value makes the
 //  traffic light red
 TrafficSignal::TrafficSignal(int initial_color) {
     switch (initial_color) {
       case RED: 
       case GREEN: 
       case YELLOW: 
         color = initial_color;
         break;
       default:
         color = RED;  //  Red by default
     }
 }
 
 //  Ensures the traffic light's signal sequence
 void TrafficSignal::change() {
     //  Red --> green, green --> yellow, yellow --> red
     color = (color + 1) % 3;
 }
 
 //  Returns the light's current color so a client can 
 //  act accordingly
 int TrafficSignal::get_color() const {
     return color;
 }

