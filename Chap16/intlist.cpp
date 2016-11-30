 //  intlist.cpp
 
 #include "intlist.h"
 #include <iostream>
 
 //  Private IntList operations
 
 /*
  *  Node constructor
  */
 IntList::Node::Node(int n): data(n), next(nullptr) {}
 
 /*
  *  insert(p, n)
  *    Inserts n onto the back of the
  *    list pointed to by p.
  *    p points to a node in a linked list
  *    n is the element to insert.
  *    Returns a pointer to the list that
  *    contains n.
  */
 IntList::Node *IntList::insert(IntList::Node *p, int n) {
     if (p)  //  Is p non-null?
         p->next = insert(p->next, n);
     else      //  p is null, make a new node
         p = new IntList::Node(n);
     return p;
 }
 
 /*
  *  Returns the length of the linked list pointed to by p.
  */
 int IntList::length(IntList::Node *p) const {
     if (p)
         return 1 + length(p->next);  //  1 + length of rest of list
     else
         return 0;                    //  Empty list has length zero
 }
 
 /*
  *  print(p)
  *    Prints the contents of a linked list of integers.
  *    p points to a linked list of nodes.
  */
 void IntList::print(IntList::Node *p) const {
     while (p) {                       //  While p is not null
         std::cout << p->data << " ";  //  Print current node's data
         p = p->next;                  //  Move to next node
     }
     std::cout << '\n';
 }
 
 /*
  *  dispose(p)
  *    Deallocate the memory held by the list pointed to by p.
  */
 void IntList::dispose(IntList::Node *p) {
     if (p) {
         dispose(p->next);   //  Free up the rest of the list
         delete p;           //  Deallocate this node
     }
 }
 
 //  Public IntList operations
 
 /*
  *  The constructor makes an initially empty list.
  *  The list is empty when head is null.
  */
 IntList::IntList(): head(nullptr) {}
 
 /*
  *  The destructor frees up the memory held by the list
  */
 IntList::~IntList() {
     clear();  //  Deallocate space held by the list nodes
 }
 
 /*
  *  insert(n)
  *    Inserts n onto the back of the list.
  *    n is the element to insert.
  */
 void IntList::insert(int n) {
     head = insert(head, n); //  Delegate work to private helper method
 }
 
 /*
  *  print()
  *    Prints the contents of the linked list of integers.
  */
 void IntList::print() const {
     print(head);  //  Delegate work to private helper method
 }
 
 /*
  *  Returns the length of the linked list.
  */
 int IntList::length() const {
     return length(head);  //  Delegate work to private helper method
 }
 
 /*
  *  clear()
  *    Removes all the elements in the linked list.
  */
 void IntList::clear() {
     dispose(head);     //  Deallocate space for all the nodes
     head = nullptr;    //  Null head signifies list is empty
 }

