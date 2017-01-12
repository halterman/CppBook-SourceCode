 #include <iostream>

 int main() {
     // Compute some products
     int op1 = 2;
     while (op1 < 100) {
         int op2 = 2; 
         while (op2 < 100) {
             if (op1 * op2 == 3731)
                 goto end;
             std::cout << "Product is " << (op1 * op2) << '\n';
             op2++;
         }
         op1++;
     }
 end:
     std::cout << "The end" << '\n';
 }

