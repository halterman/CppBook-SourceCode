 #include <iostream>
 #include <vector>
 #include <string>
 
 // Used to keep track of object creation and destruction
 class Tracker {
     std::string name;
   public:
     Tracker(const std::string& s): name(s) {
         std::cout << "Creating Tracker (" << name << ")\n";
     }
     ~Tracker() {
         std::cout << "Destroying Tracker (" << name << ")\n";
     }
 };
 
 
 bool find(const std::vector<int>& v, int lower, int upper) {
     std::cout << "------[Entering find]------\n";
     Tracker obj("find");  // Local tracking object
     bool result = false;  // Not there by default
     int seek;             // What to look for
     std::cout << "Enter item to locate:  ";
     std::cin >> seek;
     for (int i = lower; i < upper; i++)
         if (v.at(i) == seek) {
             result = true;   // Found it
             break;
         }
     std::cout << "------[Leaving find]------\n";
     return result;
 }
 
 void process(const std::vector<int>& v) {
     std::cout << "------[Entering process]------\n";
     Tracker obj("process");  // Local tracking object
     int low, high;
     std::cout << "Enter a range: ";
     std::cin >> low >> high;
     if (find(v, low, high))
         std::cout << "Found it\n";
     else
         std::cout << "Not there\n";
     std::cout << "------[Leaving process]------\n";
 
 }
 
 // Global tracking object
 Tracker obj("global");
 
 int main() {
     std::cout << "------[Entering main]------\n";
     Tracker obj("main");  // Local tracking object
     std::vector<int> nums { 11, 42, 23 };
     try {
         process(nums);
     }
     catch (std::exception& e) {
         std::cout << "nums vector bounds exceeded\n";
     }
     std::cout << "------[Leaving main]------\n";
 }

