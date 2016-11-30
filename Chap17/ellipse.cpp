 //  File ellipse.cpp
 
 #include "ellipse.h"
 #include <algorithm>  //  For max function
 
 //  PI is local to this file
 static const double PI = 3.14159;
 
 //  Note: This constructor does not enforce
 //  major_axis >= minor_axis
 Ellipse::Ellipse(double major, double minor): 
         major_radius(major), minor_radius(minor) {}
 
 //  Greatest distance across is the length of the longer radius
 double Ellipse::span() const {
     return std::max(major_radius, minor_radius);
 }
 
 double Ellipse::area() const {
     return PI * major_radius * minor_radius;
 }

