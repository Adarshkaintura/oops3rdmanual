#include <iostream>

using namespace std;

// Function template to find the maximum element in an array
template <typename T>
T findMax(const T arr[], int size) {
    T maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Function template to display elements of an array
template <typename T>
void displayArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int intArray[] = {5, 12, 8, 3, 9};
    const double doubleArray[] = {3.14, 2.718, 1.618, 0.5, 2.0};

    // Finding and displaying the maximum element in integer array
    cout << "Integer Array: ";
    displayArray(intArray, 5);
    cout << "Maximum element: " << findMax(intArray, 5) << endl;

    // Finding and displaying the maximum element in double array
    cout << "\nDouble Array: ";
    displayArray(doubleArray, 5);
    cout << "Maximum element: " << findMax(doubleArray, 5) << endl;

    return 0;
}
