#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}

    friend std::ostream& operator<<(std::ostream& out, const Complex& c);
    friend std::istream& operator>>(std::istream& in, Complex& c);
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << "Real: " << c.real << ", Imaginary: " << c.imag;
    return out;
}

std::istream& operator>>(std::istream& in, Complex& c) {
    std::cout << "Enter real part: ";
    in >> c.real;
    std::cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    Complex myComplex;

    // Using the overloaded >> operator
    std::cin >> myComplex;

    // Using the overloaded << operator
    std::cout << "Complex Number: " << myComplex << std::endl;

    return 0;
}
