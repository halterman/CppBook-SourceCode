 // intlist2.cpp
 
 #include "intlist2.h"
 #include <iostream>
 
 // Private IntList2 operations
 
 // Node constructor
 IntList2::Node::Node(int n): data(n), next(nullptr) {}
 
 
 // The constructor makes an initially empty list.
 // The list is empty when head and tail are null.
 // The list's length initially is zero.
 IntList2::IntList2(): head(nullptr), tail(nullptr), len(0) {}
 
 // The destructor deallocates the memory held by the list
 IntList2::~IntList2() { 
     clear(); 
 }
 
 // Inserts n onto the back of the list.
 // n is the element to insert.
 void IntList2::insert(int n) {
     // Make a node for the new element n
     IntList2::Node *new_node = new Node(n);
     if (tail) {   // Is tail non-null?
        tail->next = new_node;  // Link the new node onto the back
        tail = new_node;        // The new node is the new tail of the list
     }
     else // List is empty, so make head and tail point to new node
         head = tail = new_node;
     len++;  // List now has one more element
 }
 
 // Prints the contents of the linked list of integers.
 void IntList2::print() const {
     for (auto cursor = head; cursor; cursor = cursor->next) 
         std::cout << cursor->data << ' '; 
     std::cout << '\n';
 }
 
 // Returns the length of the linked list.
 int IntList2::length() const {
     return len;  
 }
 
 // Removes all the elements in the linked list.
 void IntList2::clear() {
     auto cursor = head;
     while (cursor) {
         auto temp = cursor;
         cursor = cursor->next;
         delete temp;
     }
     head = tail = nullptr;  // Null head signifies list is empty
     len = 0;
 }

