 #include "trafficlight.h"
 
 // Ensures a traffic light object is in the state of
 // red, green, or yellow.  A rogue value makes the
 // traffic light red
 Trafficlight::Trafficlight(SignalColor initial_color) {
     switch (initial_color) {
       case SignalColor::Red: 
       case SignalColor::Green: 
       case SignalColor::Yellow: 
         color = initial_color;
         break;
       default:
         color = SignalColor::Red;  // Red by default, just in case
     }
 }
 
 // Ensures the traffic light's signal sequence
 void Trafficlight::change() {
     // Red --> green, green --> yellow, yellow --> red
     if (color == SignalColor::Red)
         color = SignalColor::Green;
     else if (color == SignalColor::Green)
         color = SignalColor::Yellow;
     else if (color == SignalColor::Yellow)
         color = SignalColor::Red;
 }
 
 // Returns the light's current color so a client can 
 // act accordingly
 SignalColor Trafficlight::get_color() const {
     return color;
 }

