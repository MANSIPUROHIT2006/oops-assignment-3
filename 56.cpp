// Design a class Car with attributes for make, model, and year. Include methods to display 
// car details. 

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
   
    void setMake(string m) {
        make = m;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

   
    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};


int main() {
    Car myCar;

    myCar.setMake("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2022);

    myCar.displayDetails();

    return 0;
}
