 // Create a class Base and implement hybrid inheritance with derived classes Derived1, 
// Derived2, and Derived3. 
   #include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class function" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void derived1Function() {
        cout << "Derived1 function" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void derived2Function() {
        cout << "Derived2 function" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void derived3Function() {
        cout << "Derived3 function" << endl;
    }
};

int main() {
    Derived3 d3;
    d3.baseFunction();
    d3.derived1Function();
    d3.derived2Function();
    d3.derived3Function();
    return 0;
}
