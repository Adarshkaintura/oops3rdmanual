#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Attributes
    int rollNumber;
    string name;
    double percentage;

    // Constructor
    Student(int roll, string n, double perc) {
        rollNumber = roll;
        name = n;
        percentage = perc;
    }
};

int main() {
    // Create an object of the Student class
    Student student1(101, "John Doe", 85.5);

    // Access and print the attributes
    cout << "Student Roll Number: " << student1.rollNumber << endl;
    cout << "Student Name: " << student1.name << endl;
    cout << "Student Percentage: " << student1.percentage << "%" << endl;

    return 0;
}
