#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Constant member function to calculate the area
    double calculateArea() const {
        return 3.14159265358979323846 * radius * radius;
    }

    // Accessor function to get the radius (const function)
    double getRadius() const {
        return radius;
    }
};

int main() {
    // Create a constant object of the Circle class
    const Circle circle(5.0);

    // Access and display the circle's radius using the constant member function
    cout << "Circle Radius: " << circle.getRadius() << endl;

    // Access and display the circle's area using the constant member function
    cout << "Circle Area: " << circle.calculateArea() << endl;

    return 0;
}
