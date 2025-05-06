 // Create a class Animal with derived classes Dog, Cat, and Bird.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() {
        cout << "Bird chirps" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Bird b;

    d.sound();
    c.sound();
    b.sound();

    return 0;
}
