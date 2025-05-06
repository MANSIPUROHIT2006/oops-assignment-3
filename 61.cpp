 // Create a class Counter with a static data member to count the number of objects created. 
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  

public:
    // Constructor
    Counter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    
    static int getCount() {
        return count;
    }
};


int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    cout << "Total number of objects created: " << Counter::getCount() << endl;

    return 0;
}
