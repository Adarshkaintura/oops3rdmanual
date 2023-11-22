#include <iostream>
#include <algorithm>

class Sorter {
public:
    virtual void sort(int arr[], int size) = 0;
};

class DescendingSorter : public Sorter {
public:
    void sort(int arr[], int size) override {
        std::sort(arr, arr + size, std::greater<int>());
    }
};

class AscendingSorter : public Sorter {
public:
    void sort(int arr[], int size) override {
        std::sort(arr, arr + size);
    }
};

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void inputArray(int arr[], int size) {
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

int main() {
    const int arrSize = 6;
    int myArray[arrSize];

    // Taking array from the user
    inputArray(myArray, arrSize);

    // Using function pointer to sort in descending order
    Sorter* descendingSorter = new DescendingSorter();
    descendingSorter->sort(myArray, arrSize);

    std::cout << "Array sorted in descending order: ";
    displayArray(myArray, arrSize);

    // Using virtual function to resort in ascending order
    Sorter* ascendingSorter = new AscendingSorter();
    ascendingSorter->sort(myArray, arrSize);

    std::cout << "Array sorted in ascending order: ";
    displayArray(myArray, arrSize);

    delete descendingSorter;
    delete ascendingSorter;

    return 0;
}
