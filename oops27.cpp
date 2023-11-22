#include <iostream>
#include <fstream>

using namespace std;

class Student {
public:
    int studentId;
    string studentName;

    void displayDetails() {
        cout << "Student ID: " << studentId << "\nStudent Name: " << studentName << endl;
    }
};

int main() {
    ifstream inFile("studentDetails.txt");

    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nStudent Details:\n";
    
    Student student;

    // Reading and displaying the data from the file
    while (inFile >> student.studentId >> ws && getline(inFile, student.studentName)) {
        student.displayDetails();
        cout << endl;
    }

    inFile.close(); // Close the file

    return 0;
}
