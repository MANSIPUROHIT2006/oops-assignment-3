// Create a class Point with a default constructor, parameterized constructor, and copy constructor.
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }

    // Copy constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;             // Default constructor
    Point p2(3, 4);       // Parameterized constructor
    Point p3 = p2;        // Copy constructor

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
