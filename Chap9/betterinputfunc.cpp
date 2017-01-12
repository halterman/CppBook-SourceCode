 #include <iostream>

 /*
  *  get_int_range(first, last)
  *     Forces the user to enter an integer within a
  *     specified range
  *     first is either a minimum or maximum acceptable value
  *     last is the corresponding other end of the range,
  *     either a maximum or minimum *     value
  *     Returns an acceptable value from the user
  */
int get_int_range(int first, int last) {
    // If the larger number is provided first, 
    // switch the parameters
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }
    // Insist on values in the range first...last
    std::cout << "Please enter a value in the range "
              << first << "..." << last << ": ";
    int in_value;   // User input value
    bool bad_entry;
    do {
        std::cin >> in_value;
        bad_entry = (in_value < first || in_value > last);
        if (bad_entry) {
            std::cout << in_value << " is not in the range "
                      << first << "..." << last << '\n';
            std::cout << "Please try again: ";
        }
    } 
    while (bad_entry);
    // in_value at this point is guaranteed to be within range
    return in_value;
}

 /*
  *  main
  *     Tests the get_int_range function
  */
 int main() {
    std::cout << get_int_range(10, 20) << '\n';
    std::cout << get_int_range(20, 10) << '\n';
    std::cout << get_int_range(5, 5) << '\n';
    std::cout << get_int_range(-100, 100) << '\n';
 }

