 // Write a class Student with a static data member to keep track of the total number of 
// students enrolled.
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static int totalStudents; 

public:
   
    Student(string n, int r) {
        name = n;
        rollNumber = r;
      totalStudents++;  // Increment when a new student is created
    }

    // Static function to get the total number of students
    static int getTotalStudents() {
        return totalStudents;
    }

    // Function to display student info
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

// Initialize static data member
int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Charlie", 103);

    cout << "Total number of students enrolled: " << Student::getTotalStudents() << endl;
return0;
}
