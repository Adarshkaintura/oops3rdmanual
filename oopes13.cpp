#include <iostream>

class TollBooth {
private:
    unsigned int totalCars;
    double totalAmount;

public:
    TollBooth() : totalCars(0), totalAmount(0.0) {}

    void payingCar() {
        totalCars++;
        totalAmount += 50.0;
    }

    void nonPayingCar() {
        totalCars++;
    }

    void display() {
        std::cout << "Total Cars: " << totalCars << std::endl;
        std::cout << "Total Amount: $" << totalAmount << std::endl;
    }
};

int main() {
    TollBooth booth;

    int choice;
    do {
        std::cout << "\nToll Booth Menu:\n";
        std::cout << "1. Paying Car\n";
        std::cout << "2. Non-Paying Car\n";
        std::cout << "3. Display Totals\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                booth.payingCar();
                std::cout << "Paying car added.\n";
                break;
            case 2:
                booth.nonPayingCar();
                std::cout << "Non-paying car added.\n";
                break;
            case 3:
                booth.display();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
