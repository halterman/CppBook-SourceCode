 //  llist.h
 #include <iostream>
 
 template <typename T>
 class LList {
     /*
      *  An object that holds an element in a linked list.
      *  This type is local to the LList class and inaccessible
      *  to outside this class.
      */
     struct Node {
         T data;        //  A data element of the list
         Node *next;    //  The node that follows this one in the list
         //  Constructor
         Node(const T& d): data(d), next(nullptr) {}
     };
 
     Node *head;  //  Points to the first item in the list
 
     //  Private helper methods
 
     /*
      *  insert(p, elem)
      *    Inserts elem onto the back of the
      *    list pointed to by p.
      *    p points to a node in a linked list
      *    elem is the element to insert.
      *    Returns a pointer to the list that
      *    contains elem.
      */
     Node *insert(Node *p, const T& elem) {
         if (p)  //  Is p non-null?
             p->next = insert(p->next, elem);
         else      //  p is null, make a new node
             p = new LList::Node(elem);
         return p;
     }
 
     /*
      *  print(p)
      *    Prints the contents of the linked list 
      *    p points to a linked list of nodes.
      */
     void print(Node *p) const {
         while (p) {                       //  While p is not null
             std::cout << p->data << " ";  //  Print current node's data
             p = p->next;                  //  Move to next node
         }
         std::cout << '\n';
     }
 
 
     /*
      *  Returns the length of the linked list pointed to by p.
      */
     int length(Node *p) const {
         if (p)
             return 1 + length(p->next);  //  1 + length of rest of list
         else
             return 0;                    //  Empty list has length zero
     }
 
     /*
      *  dispose(p)
      *    Deallocate the memory held by the list pointed to by p.
      */
     void dispose(Node *p) {
         if (p) {
             dispose(p->next);   //  Free up the rest of the list
             delete p;           //  Deallocate this node
         }
     }
 
 public:
     /*
      *  The constructor makes an initially empty list
      */
     LList(): head(nullptr) {}
 
     /*
      *  The destructor frees up the memory held by the list
      */
     ~LList() {
         clear();  //  Deallocate space held by the list nodes
     }
 
     /*
      *  insert(elem)
      *    Inserts elem onto the back of the list.
      *    elem is the element to insert.
      */
     void insert(const T& elem) {
         head = insert(head, elem); //  Delegate work to private helper method
     }
 
     /*
      *  print()
      *    Prints the contents of the linked list.
      *    Defers the actual work to the private
      *    overloaded print method.
      */
     void print() const {
         print(head);  //  Delegate work to private helper method
     }
 
     /*
      *  Returns the length of the linked list.
      *  Defers the actual work to the private
      *  overloaded length method.
      */
     int length() const {
         return length(head);  //  Delegate work to private helper method
     }
 
     /*
      *  clear()
      *    Removes all the elements in the linked list.
      *    The private dispose function does the hard work.
      */
     void clear() {
         dispose(head);     //  Deallocate space for all the nodes
         head = nullptr;    //  Null head signifies list is empty
     }
 };

