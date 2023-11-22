#include <iostream>
using namespace std;

class MyClass {
public:
    // Default Constructor
    MyClass() {
        cout << "Default constructor called" << endl;
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    MyClass(int a, int b) {
        cout << "Parameterized constructor called" << endl;
        x = a;
        y = b;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
        x = other.x;
        y = other.y;
    }

    // Member function to display data members
    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }

private:
    int x;
    int y;
};

int main() {
    // Default Constructor
    MyClass obj1;

    // Parameterized Constructor
    MyClass obj2(10, 20);

    // Copy Constructor
    MyClass obj3 = obj2; // Equivalent to MyClass obj3(obj2)

    cout << "Object 1:";
    obj1.display();

    cout << "Object 2:";
    obj2.display();

    cout << "Object 3:";
    obj3.display();

    return 0;
}
