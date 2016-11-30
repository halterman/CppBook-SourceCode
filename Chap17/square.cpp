 //  File square.cpp
 
 #include "square.h"
 
 //  Defer the work of initialization to the base class constructor
 Square::Square(double side): Rectangle(side, side) {}

