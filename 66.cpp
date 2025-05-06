 // Write a class Matrix with a parameterized constructor to initialize a 2D array.
   #include <iostream>
using namespace std;

class Matrix {
private:
    int arr[3][3];

public:
    // Parameterized constructor
    Matrix(int a[3][3]) {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                arr[i][j] = a[i][j];
    }

    void display() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    Matrix m(a);
    m.display();

    return 0;
}
