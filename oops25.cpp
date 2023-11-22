#include <iostream>
#include <stdexcept>

using namespace std;

void divideAndPrint(int numerator, int denominator) {
    try {
        if (denominator == 0) {
            throw invalid_argument("Cannot divide by zero.");
        }

        int result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const invalid_argument &ia) {
        cerr << "Invalid argument exception: " << ia.what() << endl;
    } catch (const runtime_error &re) {
        cerr << "Runtime error exception: " << re.what() << endl;
    } catch (...) {
        cerr << "An unexpected error occurred.\n";
    }
}

int main() {
    int num1, num2;

    cout << "Enter the numerator: ";
    cin >> num1;

    cout << "Enter the denominator: ";
    cin >> num2;

    divideAndPrint(num1, num2);

    return 0;
}
