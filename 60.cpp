 // Write a class Employee with private attributes name, position, and salary, and public 
// methods to display employee details.
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string position;
    double salary;

public:
    // Constructor
    Employee(string empName, string empPosition, double empSalary) {
        name = empName;
        position = empPosition;
        salary = empSalary;
    }

   
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Employee emp("Alice Johnson", "Software Engineer", 75000.00);

    
    emp.displayDetails();

    return 0;
}
