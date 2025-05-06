// Implement single inheritance with a base class Person and derived class Employee.

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
public:
    int id;
    void getID() {
        cout << "Enter Employee ID: ";
        cin >> id;
    }
    void displayID() {
        cout << "Employee ID: " << id << endl;
    }
};

int main() {
    Employee e;
    e.getName();
    e.getID();
    e.displayName();
    e.displayID();

    return 0;
}
