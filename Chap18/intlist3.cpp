 // intlist3.cpp
 
 #include "intlist3.h"
 #include <iostream>
 
 // Private IntList3 operations
 
 // Node constructor
 IntList3::Node::Node(int n): data(n), next(nullptr) {
     std::cout << "Creating node " << data 
               << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
 }
 
 IntList3::Node::~Node() {
     std::cout << "Destroying node " << data
               << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
 }
 
 // The constructor makes an initially empty list.
 // The list is empty when head and tail are null.
 // The list's length initially is zero.
 IntList3::IntList3(): head(nullptr), tail(nullptr), len(0) {}
 
 // The destructor deallocates the memory held by the list
 IntList3::~IntList3() { 
     clear(); 
 }
 
 // Inserts n onto the back of the list.
 // n is the element to insert.
 void IntList3::insert(int n) {
     // Make a node for the new element n
     IntList3::Node *new_node = new Node(n);
     if (tail) {   // Is tail non-null?
        tail->next = new_node;  // Link the new node onto the back
        tail = new_node;        // The new node is the new tail of the list
     }
     else // List is empty, so make head and tail point to new node
         head = tail = new_node;
     len++;  // List now has one more element
 }
 
 // Prints the contents of the linked list of integers.
 void IntList3::print() const {
     for (auto cursor = head; cursor; cursor = cursor->next) 
         std::cout << cursor->data << ' '; 
     std::cout << '\n';
 }
 
 // Returns the length of the linked list.
 int IntList3::length() const {
     return len; 
 }
 
 // Removes all the elements in the linked list.
 void IntList3::clear() {
     auto cursor = head;
     while (cursor) {
         auto temp = cursor;
         cursor = cursor->next;
         delete temp;
     }
     head = tail = nullptr;  // Null head signifies list is empty
     len = 0;
 }

