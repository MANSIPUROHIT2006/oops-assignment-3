 // Write a program that creates an array of Car objects and displays their details. 
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void setDetails(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    const int size = 3;
    Car cars[size]; // Array of Car objects

    // Setting details of each car
    cars[0].setDetails("Toyota", "Camry", 2020);
    cars[1].setDetails("Honda", "Civic", 2021);
    cars[2].setDetails("Ford", "Mustang", 2022);

    cout << "Car Details:\n";
    for (int i = 0; i < size; i++) {
        cars[i].displayDetails();
    }

    return 0;
}

    
    
