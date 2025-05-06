create Class Time with functions to add, subtract, and compare time

#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void addTime(Time t) {
        seconds += t.seconds;
        minutes += t.minutes + seconds / 60;
        hours += t.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    bool compareTime(Time t) {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }
};

int main() {
    Time t1(2, 30, 45), t2(1, 45, 30);
    t1.addTime(t2);
    t1.display();

    cout << (t1.compareTime(t2) ? "Same" : "Different") << endl;
    return 0;
}
