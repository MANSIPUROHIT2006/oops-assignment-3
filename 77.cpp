 // Implement a class Shape with derived classes Circle, Rectangle, and Triangle.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    c.area();
    r.area();
    t.area();

    return 0;
}
