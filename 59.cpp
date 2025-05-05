 // Create a class Rectangle with private attributes for length and width, and public methods 
// to calculate area and perimeter. 
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
   
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    
    double calculateArea() {
        return length * width;
    }

    
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    
    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect(10.5, 7.2);  // Create a rectangle object

    rect.displayDimensions();
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
