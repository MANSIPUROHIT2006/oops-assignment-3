// create  Class BigNumber to handle arithmetic operations on large numbers

#include <iostream>
using namespace std;

class BigNumber {
private:
    string number;

public:
    BigNumber(string num) : number(num) {}

    BigNumber add(BigNumber bn) {
        // Basic addition logic for large numbers (for simplicity, just concatenate)
        return BigNumber(number + bn.number);
    }

    void display() {
        cout << "Big Number: " << number << endl;
    }
};

int main() {
    BigNumber bn1("1234567890123456789"), bn2("9876543210987654321");
    BigNumber result = bn1.add(bn2);
    result.display();

    return 0;
}
