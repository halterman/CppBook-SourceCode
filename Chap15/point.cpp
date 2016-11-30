 #include <iostream>
 
 class Point {
     double x;
     double y;
 public:
     Point(double x, double y): x(x), y(y) {}
     double get_x() const { return x; }
     double get_y() const { return y; }
     void set_x(double v) { x = v; }
     void set_y(double v) { y = v; }
 };
 
 double dist(const Point& pt1, const Point& pt2) {
     //  Compute distance between pt1 and pt2 and return it
     //  This is a function stub; add the actual code later
     return 0.0;  //  Just return zero for now
 }
 
 int main() {
     Point p1(2.5, 6), p2(0.0, 0.0);
     std::cout << dist(p1, p2) << '\n';
 }

