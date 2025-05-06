// Create a class SparseMatrix with member functions for matrix addition and 
// multiplication.
#include <iostream>
#include <vector>
using namespace std;

class SparseMatrix {
private:
    vector<vector<int>> mat;
public:
    SparseMatrix(int rows, int cols) {
        mat.resize(rows, vector<int>(cols, 0));
    }

    void setElement(int row, int col, int value) {
        mat[row][col] = value;
    }

    void display() {
        for (auto row : mat) {
            for (auto elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    SparseMatrix add(SparseMatrix& other) {
        int rows = mat.size();
        int cols = mat[0].size();
        SparseMatrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.setElement(i, j, mat[i][j] + other.mat[i][j]);
            }
        }
        return result;
    }
};

int main() {
    SparseMatrix m1(2, 2), m2(2, 2);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m2.setElement(0, 0, 3);
    m2.setElement(0, 1, 4);

    SparseMatrix result = m1.add(m2);
    result.display();

    return 0;
}
