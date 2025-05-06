 // Implement a class Polynomial with member functions to add and multiply polynomials.
#include <iostream>
using namespace std;

class Polynomial {
private:
    int a, b, c;

public:
    Polynomial(int x, int y, int z) : a(x), b(y), c(z) {}

    void add(Polynomial p) {
        cout << "Sum: " << a + p.a << "x^2 + " << b + p.b << "x + " << c + p.c << endl;
    }

    void multiply(Polynomial p) {
        cout << "Product: " << a * p.a << "x^2 + " << b * p.b << "x + " << c * p.c << endl;
    }
};

int main() {
    Polynomial p1(1, 2, 3), p2(4, 5, 6);
    p1.add(p2);
    p1.multiply(p2);
    return 0;
}
