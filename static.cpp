#include <iostream>

using namespace std; // Add this line

class MyClass {
private:
    static int staticData; // Static data member

public:
    static void staticFunction() { // Static member function
        cout << "Static function called." << endl;
    }

    static int getStaticData() { // Static member function
        return staticData;
    }

    static void setStaticData(int value) { // Static member function
        staticData = value;
    }
};

// Initialize the static data member
int MyClass::staticData = 0;

int main() {
    // Access static data member and call static function without creating an object
    cout << "Initial static data: " << MyClass::getStaticData() << endl;
    MyClass::setStaticData(42);
    MyClass::staticFunction();
    cout << "Updated static data: " << MyClass::getStaticData() << endl;

    return 0;
}
