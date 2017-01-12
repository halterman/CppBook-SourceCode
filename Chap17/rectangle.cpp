 // File rectangle.cpp
 
 #include "rectangle.h"
 #include <algorithm>  // For max function
 
 // Generally for rectangles length >= width, but the
 // constructor does not enforce this.
 Rectangle::Rectangle(double len, double wid): length(len), width(wid) {}
 
 // Length of the longer side--determine which is longer
 double Rectangle::span() const {
     return std::max(length, width);
 }
 
 double Rectangle::area() const {
     return length * width;
 }

