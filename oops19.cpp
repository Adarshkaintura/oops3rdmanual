#include <iostream>
#include <string>

class StringConcatenator {
private:
    std::string str;

public:
    StringConcatenator() : str("") {}

    StringConcatenator operator+(const StringConcatenator& other) const {
        StringConcatenator result;
        result.str = this->str + other.str;
        return result;
    }

    void display() const {
        std::cout << "Concatenated String: " << str << std::endl;
    }

    void setString(const std::string& s) {
        str = s;
    }
};

int main() {
    StringConcatenator string1, string2, result;

    std::string input;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, input);
    string1.setString(input);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, input);
    string2.setString(input);

    // Overloading the + operator
    result = string1 + string2;

    // Displaying the concatenated string
    result.display();

    return 0;
}
