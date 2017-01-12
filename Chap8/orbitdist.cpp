 #include <iostream>
 #include <cmath>

 int main() {
     // Location of orbiting point is (x,y)
     double x;   // These values change as the
     double y;   // satellite moves
     const double PI = 3.14159;

     // Location of fixed point is always (100, 0), 
     // AKA (p_x, p_y).  Change these as necessary.
     const double p_x = 100;
     const double p_y = 0;

     // Radians in 10 degrees
     const double radians = 10 * PI/180;

     // Precompute the cosine and sine of 10 degrees
     const double COS10 = cos(radians);
     const double SIN10 = sin(radians);

     // Get starting point from user
     std::cout << "Enter initial satellite coordinates (x,y):";
     std::cin >> x >> y;

     // Compute the initial distance
     double d1 = sqrt((p_x - x)*(p_x - x) + (p_y - y)*(p_y - y));

     // Let the satellite orbit 10 degrees
     double x_old = x;  // Remember x's original value
     x = x*COS10 - y*SIN10;  // Compute new x value
     // x's value has changed, but y's calculate depends on
     // x's original value, so use x_old instead of x.
     y = x_old*SIN10 + y*COS10;

     // Compute the new distance
     double d2 = sqrt((p_x - x)*(p_x - x) + (p_y - y)*(p_y - y));

     // Print the difference in the distances
     std::cout << "Difference in distances: " << d2 - d1 << '\n';
 }

