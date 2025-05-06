// create Class FileCompressor with functions to compress and decompress files

#include <iostream>
using namespace std;

class FileCompressor {
public:
    void compress() {
        cout << "Compressing file..." << endl;
    }

    void decompress() {
        cout << "Decompressing file..." << endl;
    }
};

int main() {
    FileCompressor fc;
    fc.compress();
    fc.decompress();

    return 0;
}
