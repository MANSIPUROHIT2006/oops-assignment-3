 // Implement a class FileHandler with a destructor that closes an open file.
#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    fstream file;

public:
    FileHandler(const string& filename) {
        file.open(filename, ios::out);
        if (file.is_open())
            file << "Writing to file.\n";
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed successfully." << endl;
        }
    }
};

int main() {
    FileHandler fh("example.txt");
    return 0;
}
