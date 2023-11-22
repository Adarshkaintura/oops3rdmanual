#include <iostream>

class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started.\n";
    }

    void stop() {
        std::cout << "Vehicle stopped.\n";
    }
};

class Car : public Vehicle {
public:
    void drive() {
        std::cout << "Car is being driven.\n";
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        std::cout << "Bike is being ridden.\n";
    }
};

int main() {
    Car myCar;
    Bike myBike;

    myCar.start();
    myCar.drive();
    myCar.stop();

    std::cout << std::endl;

    myBike.start();
    myBike.ride();
    myBike.stop();

    return 0;
}
