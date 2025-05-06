 // Implement a class Library with private, protected, and public members and demonstrate 
// their accessibility. 
#include <iostream>
using namespace std;

class Library {
private:
    int totalBooks;

protected:
    int staffCount;

public:
    string libraryName;

    Library() {
        totalBooks = 500;
        staffCount = 10;
        libraryName = "City Library";
    }

    void showDetails() {
        cout << "Library Name: " << libraryName << endl;
        cout << "Total Books: " << totalBooks << endl;
        cout << "Staff Count: " << staffCount << endl;
    }
};

class Student : public Library {
public:
    void accessInfo() {
        cout << "Accessing Protected Member (staffCount): " << staffCount << endl;
        // cout << totalBooks; // ❌ Error: private member
    }
};

int main() {
    Student s;
    s.showDetails();
    s.accessInfo();
    // cout << s.totalBooks; // ❌
    cout << "Public Member (Library Name): " << s.libraryName << endl;
    return 0;
}
