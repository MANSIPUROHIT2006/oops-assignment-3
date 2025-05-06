// Write a class Vehicle with derived classes Car and Bike.

#include <iostream>
using namespace std;

class Vehicle {
public:
    void showType() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void showType() {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void showType() {
        cout << "This is a bike" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.showType();
    b.showType();

    return 0;
}
