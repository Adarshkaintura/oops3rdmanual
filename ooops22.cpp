#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called.\n";
    }

    virtual ~Base() {
        std::cout << "Base destructor called.\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called.\n";
    }

    ~Derived() override {
        std::cout << "Derived destructor called.\n";
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr;

    return 0;
}
