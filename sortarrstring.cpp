#include <iostream>
#include <string>
#include <algorithm>

using namespace std; // Add this line

class StringArray {
public:
    StringArray(int size) : size_(size) {
        array_ = new string[size_];
    }

    ~StringArray() {
        delete[] array_;
    }

    void InputStrings() {
        for (int i = 0; i < size_; i++) {
            cout << "Enter string #" << i + 1 << ": ";
            cin >> array_[i];
        }
    }

    void SortStrings() {
        sort(array_, array_ + size_);
    }

    void DisplayStrings() {
        cout << "Sorted strings:" << endl;
        for (int i = 0; i < size_; i++) {
            cout << array_[i] << endl;
        }
    }

private:
    string* array_;
    int size_;
};

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    StringArray stringArray(n);

    stringArray.InputStrings();
    stringArray.SortStrings();
    stringArray.DisplayStrings();

    return 0;
}
