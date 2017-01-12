#include "intlist4.h"
#include <iostream>

void f() {
    IntList4 seq1, seq2;  // Create two empty integer linked lists

    seq1.insert(10);  // Build the list [10]-->[-2]-->[8]
    seq1.insert(-2);
    seq1.insert(8);
    seq1.print();

    seq2.insert(5);   // Build the list [5]-->[4]
    seq2.insert(4);
    seq2.print();

    std::cout << "--------------\n";

    seq1 = seq2;      // What does this do?

    seq1.print();
}

int main() {
    f();
    std::cout << "All done\n";
}

