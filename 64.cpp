 // Implement a class Book with a parameterized constructor to initialize book details. 
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static int totalStudents;  

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        totalStudents++;  
    }

    
    static int getTotalStudents() {
        return totalStudents;
    }

    
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};


int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Charlie", 103);

    cout << "Total number of students enrolled: " << Student::getTotalStudents() << endl;

    return 0;
}
