
 // Implement a virtual base class Entity with derived classes Person and Organization. 
#include <iostream>
using namespace std;

class Entity {
public:
    virtual void display() {
        cout << "Entity information" << endl;
    }
};

class Person : virtual public Entity {
public:
    void display() override {
        cout << "Person details" << endl;
    }
};

class Organization : virtual public Entity {
public:
    void display() override {
        cout << "Organization details" << endl;
    }
};

class Employee : public Person, public Organization {
public:
    void display() override {
        cout << "Employee details from both Person and Organization" << endl;
    }
};

int main() {
    Employee e;
    e.display();  // Resolves ambiguity due to virtual inheritance
    return 0;
}
