 // intlist1.cpp
 
 #include "intlist1.h"
 #include <iostream>
 
 // Private IntList1 operations
 
 /*
  *  Node constructor
  */
 IntList1::Node::Node(int n): data(n), next(nullptr) {}
 
 /*
  *  Returns the length of the linked list pointed to by p.
  */
 int IntList1::length(IntList1::Node *p) const {
     if (p)
         return 1 + length(p->next);  // 1 + length of rest of list
     else
         return 0;                    // Empty list has length zero
 }
 
 /*
  *  dispose(p)
  *    Deallocate the memory held by the list pointed to by p.
  */
 void IntList1::dispose(IntList1::Node *p) {
     if (p) {
         dispose(p->next);   // Free up the rest of the list
         delete p;           // Deallocate this node
     }
 }
 
 // Public IntList1 operations
 
 /*
  *  The constructor makes an initially empty list.
  *  The list is empty when head and tail are null.
  */
 IntList1::IntList1(): head(nullptr), tail(nullptr) {}
 
 /*
  *  insert(n)
  *    Inserts n onto the back of the list.
  *    n is the element to insert.
  */
 void IntList1::insert(int n) {
     // Make a node for the new element n
     IntList1::Node *new_node = new Node(n);
     if (tail) {   // Is tail non-null?
        tail->next = new_node;  // Link the new node onto the back
        tail = new_node;        // The new node is the new tail of the list
     }
     else // List is empty, so make head and tail point to new node
         head = tail = new_node;
 }
 
 /*
  *  print()
  *    Prints the contents of the linked list of integers.
  */
 void IntList1::print() const {
     for (auto cursor = head; cursor; cursor = cursor->next) 
         std::cout << cursor->data << ' '; 
     std::cout << '\n';
 }
 
 /*
  *  Returns the length of the linked list.
  */
 int IntList1::length() const {
     return length(head);  // Delegate work to private helper method
 }
 
 /*
  *  clear()
  *    Removes all the elements in the linked list.
  */
 void IntList1::clear() {
     dispose(head);          // Deallocate space for all the nodes
     head = tail = nullptr;  // Null head signifies list is empty
 }

