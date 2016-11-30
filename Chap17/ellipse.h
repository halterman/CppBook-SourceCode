 //  File ellipse.h
 
 #ifndef ELLIPSE_H_
 #define ELLIPSE_H_
 
 #include "shape.h"
 
 class Ellipse: public Shape {
 protected:
     double major_radius;  //  The longer radius of the ellipse
     double minor_radius;  //  The shorter radius of the ellipse
 public:
     Ellipse(double major, double minor);
     double span() const override;
     double area() const override;
 };
 
 #endif

