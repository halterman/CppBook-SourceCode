 //  File testshapes.cpp
 
 #include <iostream>
 #include <vector>
 
 #include "rectangle.h"
 #include "triangle.h"
 #include "circle.h"
 #include "ellipse.h"
 
 
 int main() {
     Rectangle rect(3, 4);
     Circle circ(4.5);
     Triangle tri(3, 4, 5);
     Ellipse elli(3, 4);
     std::vector<Shape *> shape_list;
 
     shape_list.push_back(&circ);
     shape_list.push_back(&tri);
     shape_list.push_back(&rect);
     shape_list.push_back(&elli);
 
     int n = shape_list.size();
     double area_total = 0.0, max_span = 0.0;
 
     for (int i = 0; i < n; i++) {
         //  Examine the area each shape
         std::cout << "Area = " << shape_list[i]->area() << '\n';
         //  Accumulate the areas of all the shapes
         area_total += shape_list[i]->area();
         //  Account for the longest object
         if (max_span < shape_list[i]->span())
             max_span = shape_list[i]->span();
     }
     //  Report the total area of all the shapes combined
     std::cout << "Total shape area is " << area_total << '\n';
     //  Report the minimum length of the container
     std::cout << "Longest shape is " << max_span << '\n';
 }

