// Implement a class Student that inherits from Person and adds a private attribute 
// studentID with appropriate methods. 
#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    string name;
    int age;

public:
    
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    
    string getName() {
        return name;
    }

    int getAge() {
        return age;
