#include<iostream>
#include<cmath>

using namespace std;

float calculateArea(float base, double height) {
    return 0.5 * base * height;
}

float calculateArea(float length, float width) {
    return length * width;
}

float calculateArea(float side) {
    return side * side;
}

float calculateArea(double radius) {
    const float pi = 3.14159;
    return pi * radius * radius;
}

int main() {
    float base,  length, width, side;
   double height, radius;

    // Calculate the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height) << endl;

    // Calculate the area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;

    // Calculate the area of a square
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square: " << calculateArea(side) << endl;

    // Calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    return 0;
}
