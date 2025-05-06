// Write a class Distance with a friend function to add two distances.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Friend function to add distances
    friend Distance addDistance(Distance d1, Distance d2);

    void display() {
        cout << "Feet: " << feet << ", Inches: " << inches << endl;
    }
};

Distance addDistance(Distance d1, Distance d2) {
    int f = d1.feet + d2.feet;
    int i = d1.inches + d2.inches;
    if (i >= 12) {
        f += i / 12;
        i %= 12;
    }
    return Distance(f, i);
}

int main() {
    Distance d1(5, 8), d2(4, 11);
    Distance d3 = addDistance(d1, d2);
    d3.display();
    return 0;
}
