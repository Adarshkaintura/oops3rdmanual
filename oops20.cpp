#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point() : x(0.0), y(0.0) {}

    Point(double xCoordinate, double yCoordinate) : x(xCoordinate), y(yCoordinate) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }
};

int main() {
    Point userPoint;  // Creating an object with default constructor

    double userX, userY;

    std::cout << "Enter X coordinate: ";
    std::cin >> userX;
    userPoint.setX(userX);

    std::cout << "Enter Y coordinate: ";
    std::cin >> userY;
    userPoint.setY(userY);

    // Displaying user-input values
    std::cout << "User Point: X = " << userPoint.getX() << ", Y = " << userPoint.getY() << std::endl;

    return 0;
}
