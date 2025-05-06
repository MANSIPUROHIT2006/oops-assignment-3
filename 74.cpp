 // Implement a class Box with a friend function to calculate the volume of two boxes.
#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    friend int calculateVolume(Box b1, Box b2);
};

int calculateVolume(Box b1, Box b2) {
    int v1 = b1.length * b1.width * b1.height;
    int v2 = b2.length * b2.width * b2.height;
    return v1 + v2;
}

int main() {
    Box box1(2, 3, 4);
    Box box2(1, 2, 3);

    cout << "Total volume: " << calculateVolume(box1, box2) << endl;
    return 0;
}
