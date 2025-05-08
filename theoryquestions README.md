**1. What is an object in C++?**
An object is an instance of a class. It represents a real-world entity and holds data (variables) and functions (methods) defined in the class.

**2. What is a class in C++ and how does it differ from an object?**
A class is a user-defined data type that serves as a blueprint for creating objects. An object is an instantiation of a class.

**3. Explain the concept of encapsulation with an example.**
Encapsulation is the bundling of data and methods that operate on that data within a class, restricting direct access from outside.
Example:
class Student {
private:
    int marks;
public:
    void setMarks(int m) { marks = m; }
    int getMarks() { return marks; }
};

**4. How do you define a class in C++?**
class ClassName {
  // members and methods
};

**5. Describe the syntax for creating an object of a class.**
ClassName objectName;

**6. What are private members in a class and how are they accessed?**
Private members are accessible only within the class and not from outside. They can be accessed via public methods.

**7. What are public members in a class and how are they accessed?**
Public members can be accessed from outside the class using the object of the class.

**8. Explain the significance of access specifiers in a class.**
Access specifiers (public, private, protected) control the visibility and accessibility of class members.

**9. Provide an example of a class with both private and public members.**
class Box {
private:
    int length;
public:
    void setLength(int l) { length = l; }
    int getLength() { return length; }
};

**10. How does data hiding work in C++?**
By declaring data members private and exposing them via public methods, we hide internal data from unauthorized access.

**11. What is a static data member in C++?**
A static data member is shared by all objects of the class and exists independently of any object.

**12. How do you declare and initialize a static data member?**
Declare inside class: static int count;
Initialize outside class: int ClassName::count = 0;

**13. What is a static function member in C++?**
It is a function that can be called using the class name without creating an object and can only access static members.

**14. How do static function members differ from regular function members?**
They don’t operate on object instances and can only access static members directly.

**15. Provide an example of a class with static data and function members.**
class Counter {
private:
    static int count;
public:
    static void increment() { count++; }
    static int getCount() { return count; }
};
int Counter::count = 0;

**16. What is a constructor in C++ and why is it important?**
A constructor is a special function that initializes objects when they are created.

**17. Explain the different types of constructors in C++.**

Default Constructor

Parameterized Constructor

Copy Constructor

Constructor with Default Arguments

**18. What is a default constructor and when is it used?**
A constructor with no parameters. Used when no specific initialization is needed.

**19. How do parameterized constructors work?**
They take arguments to initialize data members.
class Point {
public:
    Point(int x, int y) { /* initialization */ }
};

**20. What is a copy constructor and what is its purpose?**
It creates a new object as a copy of an existing object.
Point(Point &p) { /* copy members */ }

**21. Explain the concept of constructor overloading.**
Defining multiple constructors with different parameters in the same class.

**22. How does a constructor initializer list work?**
Initializes class members before the constructor body executes.
class Demo {
    int a;
public:
    Demo(int x) : a(x) {}
};

**23. What is a destructor in C++ and what is its purpose?**
It cleans up resources when an object goes out of scope.

**24. How is a destructor declared and defined?**
~ClassName() { /* cleanup code */ }

**25. What happens if a destructor is not explicitly defined in a class?**
A default destructor is automatically provided by the compiler.

**26. Explain the concept of automatic and dynamic storage duration in relation to destructors.**
Automatic objects are destroyed when they go out of scope.
Dynamic objects must be explicitly deleted using delete, which calls the destructor.

**27. How do destructors differ from constructors?**
Constructors initialize objects; destructors destroy them. Constructors can be overloaded; destructors cannot.

**28. What is operator overloading in C++ and why is it useful?**
It allows operators to be redefined for user-defined types.

**29. Describe the syntax for overloading an operator.**
ClassName operator+(const ClassName& obj);

**30. Which operators can and cannot be overloaded in C++?**
Can be overloaded: +, -, , /, ==, !=, [], (), etc.
Cannot be overloaded: ::, ., ., sizeof, typeid

**31. Provide an example of overloading the "+" operator for a custom class.**
class Complex {
public:
    int real, imag;
    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

**32. Explain the concept of friend functions in the context of operator overloading.**
A friend function can access private data and is used to overload operators like << and >>.

**33. What is a friend function in C++ and how is it declared?**
A function declared using the friend keyword inside a class.
friend void display();

**34. How do friend functions differ from member functions?**
They are not part of the class but have access to its private and protected members.

**35. Explain the benefits and potential drawbacks of using friend functions.**
Benefits: Access private data, useful for operator overloading.
Drawbacks: Break encapsulation, increase coupling.

**36. What is inheritance in C++ and why is it important?**
Inheritance allows a class to acquire properties and behaviors of another class, promoting code reuse.

**37. Explain the different types of inheritance in C++.**
Single

Multiple

Multilevel

Hierarchical

Hybrid

****38. How do you implement single inheritance in C++?**
class A { };
class B : public A { };

**39. What is multiple inheritance and how does it differ from single inheritance?**
A class inherits from more than one class. It differs in complexity and potential for ambiguity.

**40. Describe hierarchical inheritance with an example.**
Multiple derived classes from one base class.
class A { };
class B : public A { };
class C : public A { };

**41. What is multilevel inheritance and how is it implemented in C++?**
Inheritance in a chain.
class A { };
class B : public A { };
class C : public B { };

**42. Explain the concept of hybrid inheritance.**
A combination of more than one type of inheritance.

**43. What are access modifiers in C++ and what are the different types?**
Control member accessibility. Types: public, private, protected.

**44. How do public, private, and protected access modifiers affect inheritance?**

Public: base public members stay public in derived.

Private: all inherited members become private.

Protected: public/protected become protected.

**45. Explain how access modifiers control member accessibility in derived classes.**
They determine whether inherited members are accessible directly or through member functions.

**46. What is function overriding in the context of inheritance?**
A derived class provides its own version of a base class function with the same signature.

**47. How do you override a base class function in a derived class?**
By defining a function in the derived class with the same name and parameters.

**48. Explain the use of the "virtual" keyword in function overriding.**
Allows dynamic binding and enables overriding behavior.

**49. What is the significance of the "override" specifier in C++11 and later?**
Ensures that a method overrides a base class method, catching errors at compile time.

**50. What is a virtual base class in C++ and why is it used?**
Used in multiple inheritance to avoid duplication of base class members.

**51. How do you declare and implement a virtual base class?**
class A { };
class B : virtual public A { };
class C : virtual public A { };

**52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.**
They ensure only one instance of the base class is shared, avoiding the diamond problem.

**53. Provide an example of using a virtual base class to avoid the diamond problem in inheritance.**
class A {
public:
    void display() {}
};

class B : virtual public A { };
class C : virtual public A { };
class D : public B, public C { };
