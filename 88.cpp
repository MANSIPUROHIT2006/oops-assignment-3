 // Create a base class Employee and derived class Manager with overridden methods. 
#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details" << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "Manager details" << endl;
    }
};

int main() {
    Employee* e;
    Manager m;
    e = &m;
    e->showDetails(); // Calls Manager's showDetails
    return 0;
}
