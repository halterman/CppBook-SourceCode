 #include <iostream>

 // The Point class defines the structure of software 
 // objects that model mathematical, geometric points
 class Point {
 public:
     double x;   // The point's x coordinate
     double y;   // The point's y coordinate
 };

 int main() {
     // Declare some point objects
     Point pt1, pt2;
     // Assign their x and y fields
     pt1.x = 8.5; // Use the dot notation to get to a part of the object
     pt1.y = 0.0;
     pt2.x = -4;
     pt2.y = 2.5;
     // Print them
     std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
     std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
     // Reassign one point from the other
     pt1 = pt2;
     std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
     std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
     // Are pt1 and pt2 aliases?  Change pt1's x coordinate and see.
     pt1.x = 0;  
     std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
     // Note that pt2 is unchanged
     std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";

 }

