#include <iostream>
#include <string>
using namespace std;

class solution {
public:
    void rem_ch(string &s1, const string &s2) {
        for (char ch : s2) {
            size_t found = s1.find(ch);
            while (found != string::npos) {
                s1.erase(found, 1);
                found = s1.find(ch);
            }
        }
        cout << "The modified string after removing the characters from string 2 is: " << s1 << endl;
    }
};

int main() {
    string s1;
    string s2;
    solution c;
    cout << "Enter the string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    c.rem_ch(s1, s2);
    return 0;
}
