 // intlist2.h
 
 class IntList2 {
     // The nested private Node class from before
     struct Node {
         int data;      // A data element of the list
         Node *next;    // The node that follows this one in the list
         Node(int d);   // Constructor
     };

     Node *head;  // Points to the first item in the list
     Node *tail;  // Points to the last item in the list

     int len;     // The number of elements in the list

 public:
     // The constructor makes an initially empty list
     IntList2();

     // The destructor that reclaims the list's memory
     ~IntList2();
 
     // Inserts n onto the back of the list.
     void insert(int n);
 
     // Prints the contents of the linked list of integers.
     void print() const;
 
     // Returns the length of the linked list.
     int length() const;
 
     // Removes all the elements in the linked list.
     void clear();
 };

