 // Write a class Animal and implement a virtual base class to avoid the diamond problem in 
// inheritance.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void sound() override {
        cout << "Mammal sound" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void sound() override {
        cout << "Bird chirps" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void sound() override {
        cout << "Bat sound" << endl;
    }
};

int main() {
    Bat b;
    b.sound();  // Resolves diamond problem using virtual inheritance
    return 0;
}
