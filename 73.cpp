#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 0, int m = 0, int y = 0) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(const Date& d) {
        return (day == d.day && month == d.month && year == d.year);
    }
};

int main() {
    Date d1(6, 5, 2025);
    Date d2(6, 5, 2025);

    if (d1 == d2)
        cout << "Dates are equal." << endl;
    else
        cout << "Dates are not equal." << endl;

    return 0;
}
