// Multilevel inheritance: Base → Intermediate → Derived

#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class function" << endl;
    }
};

class Intermediate : public Base {
public:
    void intermediateFunction() {
        cout << "Intermediate class function" << endl;
    }
};

class Derived : public Intermediate {
public:
    void derivedFunction() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived d;
    d.baseFunction();
    d.intermediateFunction();
    d.derivedFunction();
    return 0;
}
