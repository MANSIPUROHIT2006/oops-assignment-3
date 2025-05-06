 // Implement the "<<" and ">>" operators for a class Fraction to input and output fraction values.
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    friend istream& operator>>(istream& in, Fraction& f);
    friend ostream& operator<<(ostream& out, const Fraction& f);
};

istream& operator>>(istream& in, Fraction& f) {
    cout << "Enter numerator: ";
    in >> f.numerator;
    cout << "Enter denominator: ";
    in >> f.denominator;
    return in;
}

ostream& operator<<(ostream& out, const Fraction& f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

int main() {
    Fraction f;
    cin >> f;
    cout << "Fraction is: " << f << endl;
    return 0;
}
