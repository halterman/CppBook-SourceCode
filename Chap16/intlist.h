 //  intlist.h
 
 class IntList {
     /*
      *  An object that holds an element in a linked list.
      *  This type is local to the IntList class and inaccessible
      *  to outside this class.
      */
     struct Node {
         int data;      //  A data element of the list
         Node *next;    //  The node that follows this one in the list
         Node(int d);   //  Constructor
     };
 
     Node *head;  //  Points to the first item in the list
 
     //  Private helper methods
 
     /*
      *  insert(p, n)
      *    Inserts n onto the back of the
      *    list pointed to by p.
      *    p points to a node in a linked list
      *    n is the element to insert.
      *    Returns a pointer to the list that
      *    contains n.
      */
     Node *insert(Node *p, int n);
 
     /*
      *  print(p)
      *    Prints the contents of a linked list of integers.
      *    p points to a linked list of nodes.
      */
     void print(Node *p) const;
 
     /*
      *  Returns the length of the linked list pointed to by p.
      */
     int length(Node *p) const;
 
     /*
      *  dispose(p)
      *    Deallocate the memory held by the list pointed to by p.
      */
     void dispose(Node *p);
 
 public:
     /*
      *  The constructor makes an initially empty list
      */
     IntList();
 
     /*
      *  The destructor frees up the memory held by the list
      */
     ~IntList();
 
     /*
      *  insert(n)
      *    Inserts n onto the back of the list.
      *    n is the element to insert.
      */
     void insert(int n);
 
     /*
      *  print()
      *    Prints the contents of the linked list of integers.
      */
     void print() const;
 
     /*
      *  Returns the length of the linked list.
      */
     int length() const;
 
     /*
      *  clear()
      *    Removes all the elements in the linked list.
      */
     void clear();
 };

