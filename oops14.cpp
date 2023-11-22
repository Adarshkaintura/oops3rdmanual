#include<iostream>
#include<string>
using namespace std;

class Staff {
protected:
    string name;

public:
    void setName() {
        cout << "Enter name: ";
        getline(cin, name);
    }

    string getName() const {
        return name;
    }
};

class Teacher : public Staff {
private:
    string subject;
    string publication;

public:
    void setSubjectPublication() {
        cout << "Enter subject: ";
        getline(cin, subject);

        cout << "Enter publication: ";
        getline(cin, publication);
    }

    string getSubject() const {
        return subject;
    }

    string getPublication() const {
        return publication;
    }
};

class Officer : public Staff {
private:
    string grade;

public:
    void setGrade() {
        cout << "Enter grade: ";
        getline(cin, grade);
    }

    string getGrade() const {
        return grade;
    }
};

class Typist : public Staff {
protected:
    int speed;

public:
    void setSpeed() {
        cout << "Enter typing speed: ";
        cin >> speed;
        cin.ignore();  // Ignore the newline character left in the input buffer
    }

    int getSpeed() const {
        return speed;
    }
};

class Regular : public Typist {
    // Additional functions specific to Regular typists can be added here
};

class Casual : public Typist {
private:
    double dailyWages;

public:
    void setDailyWages() {
        cout << "Enter daily wages: ";
        cin >> dailyWages;
        cin.ignore();  // Ignore the newline character left in the input buffer
    }

    double getDailyWages() const {
        return dailyWages;
    }
};

int main() {
    Teacher myTeacher;
    myTeacher.setName();
    myTeacher.setSubjectPublication();

    Officer myOfficer;
    myOfficer.setName();
    myOfficer.setGrade();

    Casual myCasualTypist;
    myCasualTypist.setName();
    myCasualTypist.setSpeed();
    myCasualTypist.setDailyWages();

    // Example of retrieving information
    cout << "Teacher Information:" << endl;
    cout << "Name: " << myTeacher.getName() << endl;
    cout << "Subject: " << myTeacher.getSubject() << endl;
    cout << "Publication: " << myTeacher.getPublication() << endl;

    cout << "\nOfficer Information:" << endl;
    cout << "Name: " << myOfficer.getName() << endl;
    cout << "Grade: " << myOfficer.getGrade() << endl;

    cout << "\nCasual Typist Information:" << endl;
    cout << "Name: " << myCasualTypist.getName() << endl;
    cout << "Typing Speed: " << myCasualTypist.getSpeed() << endl;
    cout << "Daily Wages: $" << myCasualTypist.getDailyWages() << endl;

    return 0;
}
