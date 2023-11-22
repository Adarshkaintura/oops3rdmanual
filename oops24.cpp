#include <iostream>
#include <stdexcept>

using namespace std;

double readDoubleFromKeyboard() {
    double number;
    cout << "Enter a double number: ";
    if (!(cin >> number)) {
        throw invalid_argument("Invalid input. Please enter a double.");
    }
    return number;
}

double divideNumbers(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Cannot divide by zero.");
    }
    return numerator / denominator;
}

int main() {
    try {
        double num1 = readDoubleFromKeyboard();
        double num2 = readDoubleFromKeyboard();

        double result = divideNumbers(num1, num2);

        cout << "Result of division: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (...) {
        cerr << "An unexpected error occurred.\n";
    }

    return 0;
}
