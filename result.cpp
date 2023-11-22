#include <iostream>

int main() {
    int subjectMarks[6];  
    int totalMarks = 0;
    double averageMarks;

    for (int i = 0; i < 6; i++) {
        std::cout << "Enter marks for subject " << i + 1 << ": ";
        std::cin >> subjectMarks[i];

        if (subjectMarks[i] < 0 || subjectMarks[i] > 100) {
            std::cout << "Invalid marks entered. Marks should be between 0 and 100." << std::endl;
            return 1; 
        }

        totalMarks += subjectMarks[i];
    }

    averageMarks = static_cast<double>(totalMarks) / 6;

    if (averageMarks >= 40) {
        std::cout << "Congratulations! You have passed." << std::endl;
    } else {
        std::cout << "Sorry, you have failed." << std::endl;
    }

    std::cout << "Total Marks: " << totalMarks << std::endl;
    std::cout << "Average Marks: " << averageMarks << std::endl;

    return 0;
}
