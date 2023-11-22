#include <iostream>

class Shape {
public:
    virtual float calculateSquare(float num) const = 0;
};

class Square : public Shape {
public:
    float calculateSquare(float num) const override {
        return num * num;
    }
};

class Cube : public Square {
public:
    float calculateSquare(float num) const override {
        float square = Square::calculateSquare(num);
        return square * num;
    }
};

int main() {
    float number;

    std::cout << "Enter a floating-point number: ";
    std::cin >> number;

    Square squareObj;
    Cube cubeObj;

    std::cout << "Square of " << number << ": " << squareObj.calculateSquare(number) << std::endl;
    std::cout << "Cube of " << number << ": " << cubeObj.calculateSquare(number) << std::endl;

    return 0;
}
