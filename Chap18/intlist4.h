 // intlist4.h
 
 class IntList4 {
     // The nested private Node class from before
     struct Node {
         int data;      // A data element of the list
         Node *next;    // The node that follows this one in the list
         Node(int d);   // Constructor
         ~Node();       // Destructor
     };
 
     Node *head;  // Points to the first item in the list
     Node *tail;  // Points to the last item in the list

     int len;     // Number of elements in the list
 
 public:
     // The constructor makes an initially empty list
     IntList4();
 
     // The destructor that reclaims the list's memory
     ~IntList4();

     // Copy constructor
     IntList4(const IntList4& other);

     // Assignment operator
     IntList4& operator=(const IntList4& other);

     // Inserts n onto the back of the list.
     void insert(int n);
 
     // Prints the contents of the linked list of integers.
     void print() const;
 
     // Returns the length of the linked list.
     int length() const;
 
     // Removes all the elements in the linked list.
     void clear();
 };

