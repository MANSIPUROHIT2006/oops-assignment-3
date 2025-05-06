 // Create a class DynamicArray with a destructor that deallocates dynamically allocated memory.
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;

public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; ++i)
            arr[i] = i;
    }

    void display() {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
        cout << "Memory deallocated." << endl;
    }
};

int main() {
    DynamicArray da(5);
    da.display();
    return 0;
}
