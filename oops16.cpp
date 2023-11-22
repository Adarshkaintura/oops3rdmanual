#include <iostream>

class MyClass {
private:
    int x;
    double y;

public:
    MyClass() {
        x = 0;
        y = 0.0;
        std::cout << "Default Constructor called.\n";
    }

    MyClass(int a, double b) {
        x = a;
        y = b;
        std::cout << "Parameterized Constructor called with values " << x << " and " << y << ".\n";
    }

    MyClass(const MyClass &obj) {
        x = obj.x;
        y = obj.y;
        std::cout << "Copy Constructor called.\n";
    }

    ~MyClass() {
        std::cout << "Destructor called. Object destroyed.\n";
    }

    void display() {
        std::cout << "Values: " << x << " and " << y << "\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(5, 7.5);
    MyClass obj3 = obj2;

    std::cout << "Object 1: ";
    obj1.display();

    std::cout << "Object 2: ";
    obj2.display();

    std::cout << "Object 3: ";
    obj3.display();

    return 0;
}
