#include <iostream>
#include <cmath>
using namespace std;
double power(double m, int n = 2) {
    return std::pow(m, n);
}

int main() {
    double m;
    int n;

    cout << "Enter a number (m) and (press Enter for default 2 power (n)): ";
    cin >> m;

    if (std::cin.peek() == '\n') {
        n = 2;
    } else {
            std::cout << "Enter a power : ";
        cin >> n;
    }

    double result = power(m, n);
    cout << "Result: " << result << endl;

    return 0;
}
