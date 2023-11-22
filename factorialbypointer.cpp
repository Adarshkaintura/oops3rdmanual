#include <iostream>

using namespace std;

// Define a function pointer type for factorial calculation
typedef int (*FactorialFunction)(int);

// Function to calculate factorial using an iterative approach
int iterativeFactorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial using a recursive approach
int recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * recursiveFactorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Create a function pointer and initialize it with the chosen factorial function
    FactorialFunction calculateFactorial = iterativeFactorial; // Change to recursiveFactorial if needed

    // Calculate and display the factorial using the function pointer
    int result = calculateFactorial(n);
    cout << "Factorial of " << n << " is " << result << endl;

    return 0;
}
