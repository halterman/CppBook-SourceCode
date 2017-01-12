 // File square.h
 
 #ifndef SQUARE_H_
 #define SQUARE_H_
 
 #include "rectangle.h"
 
 // A square is a special case of a rectangle
 
 class Square: public Rectangle {
 public:
     // Length and width are equal in a square, so specify the
     // length of only one side
     Square(double side);
     // The inherited methods work as is; no need to 
     // change their behavior.
 };
 
 #endif

