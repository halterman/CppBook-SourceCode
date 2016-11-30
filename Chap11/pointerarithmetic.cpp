 #include <iostream>

 int main() {
     //  Make an array
     int arr[] = {10, 20, 30, 40, 50};
     int *p = arr;          //  p points to the first element
     std::cout << *p << '\n';    //  Prints 10, does not change p
     std::cout << p[0] << '\n';  //  Prints 10, does not change p
     std::cout << p[1] << '\n';  //  Prints 20, does not change p
     std::cout << *p << '\n';    //  Prints 10, does not change p
     p++;                   //  Advances p to the next element
     std::cout << *p << '\n';    //  Prints 20, does not change p
     p += 2;                //  Advance p two places
     std::cout << *p << '\n';    //  Prints 40, does not change p
     std::cout << p[0] << '\n';  //  Prints 40, does not change p
     std::cout << p[1] << '\n';  //  Prints 50, does not change p
     p--;                   //  Moves p back one place
     std::cout << *p << '\n';    //  Prints 30, does not change p
 }

