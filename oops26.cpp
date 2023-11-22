#include <iostream>
#include <fstream>

using namespace std;

class Student {
public:
    int studentId;
    string studentName;

    void enterDetails() {
        cout << "Enter Student ID: ";
        cin >> studentId;

        cin.ignore(); // Clear the newline character left in the buffer
        cout << "Enter Student Name: ";
        getline(cin, studentName);
    }

    void displayDetails() {
        cout << "Student ID: " << studentId << "\nStudent Name: " << studentName << endl;
    }
};

int main() {
    ofstream outFile("studentDetails.txt", ios::app); // Open file in append mode

    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    Student student;
    char choice;

    do {
        student.enterDetails();

        // Writing student details to the file
        outFile << "Student ID: " << student.studentId << ", Student Name: " << student.studentName << endl;

        cout << "Do you want to enter details for another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outFile.close(); // Close the file

    // Reading and displaying the data from the file
    ifstream inFile("studentDetails.txt");

    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nStudent Details entered:\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close(); // Close the file

    return 0;
}
