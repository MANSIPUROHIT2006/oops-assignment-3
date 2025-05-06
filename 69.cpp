// Write a class Logger with a destructor that logs messages when the object is destroyed.
#include <iostream>
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Logger started." << endl;
    }

    ~Logger() {
        cout << "Logger ended. Object destroyed." << endl;
    }
};

int main() {
    Logger log;
    return 0;
}
