#include <iostream>

using namespace std;

class Tollbooth {
private:
    unsigned int totalCars;
    double amountCollected;

public:
    // Constructor to initialize data members
    Tollbooth() : totalCars(0), amountCollected(0.0) {}

    // Member function to handle paying car
    void payingCar() {
        totalCars++;
        amountCollected += 50.0;
    }

    // Member function to handle non-paying car
    void nonPayingCar() {
        totalCars++;
    }

    // Member function to display total cars and amount collected
    void display() {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Amount Collected: $" << amountCollected << endl;
    }
};

int main() {
    Tollbooth tollbooth;
    int choice;

    while (true) {
        cout << "Tollbooth Menu:" << endl;
        cout << "1. Add Paying Car" << endl;
        cout << "2. Add Non-Paying Car" << endl;
        cout << "3. Display Tollbooth Stats" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tollbooth.payingCar();
                cout << "Paying Car added." << endl;
                break;
            case 2:
                tollbooth.nonPayingCar();
                cout << "Non-Paying Car added." << endl;
                break;
            case 3:
                tollbooth.display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
