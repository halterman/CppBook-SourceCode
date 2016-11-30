 #include "trafficlight.h"
 
 //  Ensures a traffic light object is in the state of
 //  red, green, or yellow.  A rogue value makes the
 //  traffic light red
 Trafficlight::Trafficlight(Trafficlight::SignalColor initial_color) {
     switch (initial_color) {
       case Red: 
       case Green: 
       case Yellow: 
         color = initial_color;
         break;
       default:
         color = Red;  //  Red by default, just in case
     }
 }
 
 //  Ensures the traffic light's signal sequence
 void Trafficlight::change() {
     //  Red --> green, green --> yellow, yellow --> red
     //  Treat enum type as int, compute successor color, then
     //  covert back to enum type.
     color = static_cast<SignalColor>((color + 1) % 3);
 }
 
 //  Returns the light's current color so a client can 
 //  act accordingly
 Trafficlight::SignalColor Trafficlight::get_color() const {
     return color;
 }

