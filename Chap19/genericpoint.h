 #ifndef GENERICPOINT_H_
 #define GENERICPOINT_H_

 template <typename T>
 class Point {
   public:
     T x;
     T y;
     Point(T x, T y): x(x), y(y) {}
 };

 #endif

