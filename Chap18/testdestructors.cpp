#include <iostream>

class Widget {
    int data;
public:
    Widget(int n): data(n) {
        std::cout << "Creating widget " << data 
                  << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
    }
    ~Widget() {
        std::cout << "Destroying widget " << data
                  << "  (" << reinterpret_cast<uintptr_t>(this) << ")\n";
    }
};

// Global widgets
Widget global1(100);
Widget global2(200);

void test_widget_objects() {
    std::cout << "Entering test_widget_objects" << '\n';
    Widget w1(1);
    Widget w2(2);
    Widget w3(3);
    Widget w4(4);
    std::cout << "Leaving test_widget_objects" << '\n';
}

void test_widget_pointers() {
    std::cout << "Entering test_widget_pointers" << '\n';
    Widget *p1 = new Widget(10);
    Widget *p2 = new Widget(20);
    Widget *p3 = new Widget(30);
    Widget *p4 = new Widget(40);
    delete p2;
    delete p1;
    delete p4;
    // Not deleting p3, introducing a memory leak
    std::cout << "Leaving test_widget_pointers" << '\n';
}

int main() {
    std::cout << "Entering main" << '\n';
    test_widget_objects(); 
    test_widget_pointers(); 
    std::cout << "Leaving main" << '\n';
}

