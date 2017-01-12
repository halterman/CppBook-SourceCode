 // File rectangle.h
 
 #ifndef RECTANGLE_H_
 #define RECTANGLE_H_
 
 #include "shape.h"
 
 class Rectangle: public Shape {
 protected:
     double length;
     double width;
 public:
     Rectangle(double len, double wid);
     // Length of the longer side
     double span() const override;
     double area() const override;
 };
 
 #endif

