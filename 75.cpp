// Create a class Circle with a friend function to calculate the area
#include <iostream>
#define PI 3.14159
using namespace std;

class Circle {
private:
    float radius;

public:
    // Constructor to initialize radius
    Circle(float r) {
        radius = r;
    }

    // Declare friend function
    friend float calculateArea(Circle c);
};

// Definition of friend function
float calculateArea(Circle c) {
    return PI * c.radius * c.radius;
}

int main() {
    float r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle c(r);
    cout << "Area of the circle: " << calculateArea(c) << endl;

    return 0;
}

