#include <iostream>

using namespace std;

struct Node {
    int data;    // The element of interest
    Node *next;  // Link to successor node in the link
    // Constructor
    Node(int data, Node *next): data(data), next(next) {}
};

int main() {
    // Node objects
    Node n4(3, nullptr),  // Make the last node
         n3(0, &n4),      // Make the next to last node and link to last node
         n2(10, &n3),     // Make the second node and link to third node
         n1(23, &n2);     // Make the first node and link to second node

    // Print the linked list built from the Node objects
    for (Node *cursor = &n1; cursor != nullptr; cursor = cursor->next) 
        std::cout << cursor->data << ' ';
    std::cout << '\n';
}

