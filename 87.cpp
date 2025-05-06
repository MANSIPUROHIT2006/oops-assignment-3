 // Implement function overriding with a base class Shape and derived class Circle.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->draw();  // Calls Circle's draw due to virtual
    return 0;
}
