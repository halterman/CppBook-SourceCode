 // intlist4.cpp
 
 #include "intlist4.h"
 #include <iostream>
 #include <utility>   // For std::swap
 
 // Private IntList4 operations
 
 // Node constructor
 IntList4::Node::Node(int n): data(n), next(nullptr) {
     std::cout << "Creating node " << data 
               << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
 }
 
 IntList4::Node::~Node() {
     std::cout << "Destroying node " << data
               << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
 }
 
 // The constructor makes an initially empty list.
 // The list is empty when head and tail are null.
 // The list's size initially is zero.
 IntList4::IntList4(): head(nullptr), tail(nullptr), len(0) {}

 // Copy constructor makes a copy of the other object's list
 IntList4::IntList4(const IntList4& other): IntList4() {
     // Walk through other's list inserting each of its elements
     // into this list
     for (auto cursor = other.head; cursor; cursor = cursor->next)
         insert(cursor->data);
 }

 // Assignment operator
 IntList4& IntList4::operator=(const IntList4& other) {
     // Make a local, temporary copy of other
     IntList4 temp{other};
     // Exchange the head and tail pointers and len from this list
     // with those of the new, temporary list
     std::swap(head, temp.head);
     std::swap(tail, temp.tail);
     std::swap(len, temp.len);
     // The temporary list now points to this list's original contents, 
     // and this list now points to the copy of other's list
     // The temporary list will be destroyed when this constructor returns
     return *this;
 }
 
 // The destructor deallocates the memory held by the list
 IntList4::~IntList4() { clear(); }
 
 // Inserts n onto the back of the list.
 // n is the element to insert.
 void IntList4::insert(int n) {
     // Make a node for the new element n
     IntList4::Node *new_node = new Node(n);
     if (tail) {   // Is tail non-null?
        tail->next = new_node;  // Link the new node onto the back
        tail = new_node;        // The new node is the new tail of the list
     }
     else // List is empty, so make head and tail point to new node
         head = tail = new_node;
     len++;  // List now has one more element
 }
 
 // Prints the contents of the linked list of integers.
 void IntList4::print() const {
     for (auto cursor = head; cursor; cursor = cursor->next) 
         std::cout << cursor->data << ' '; 
     std::cout << '\n';
 }
 
 // Returns the length of the linked list.
 int IntList4::length() const {
     return len; 
 }
 
 // Removes all the elements in the linked list.
 void IntList4::clear() {
     auto cursor = head;
     while (cursor) {
         auto temp = cursor;
         cursor = cursor->next;
         delete temp;
     }
     head = tail = nullptr;  // Null head signifies list is empty
     len = 0;
 }

