// Create a class Parent and implement multiple inheritance with derived classes Child1 and Child2.

#include <iostream>
using namespace std;

class Parent {
public:
    void parentFunction() {
        cout << "Parent function" << endl;
    }
};

class Child1 {
public:
    void child1Function() {
        cout << "Child1 function" << endl;
    }
};

class Child2 : public Parent, public Child1 {
public:
    void child2Function() {
        cout << "Child2 function" << endl;
    }
};

int main() {
    Child2 c;
    c.parentFunction();
    c.child1Function();
    c.child2Function();

    return 0;
}
