#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class mid {
    string s;
public:
    void takestring(int i) {
        cout << "Enter the string #" << i + 1 << ": ";
        cin >> s;
    }

    void sortstring(void) {
        sort(s.begin(), s.end());
    }
    void show(void){
        cout<<s<<endl;
    }
    
};

int main() {
    int n;
    cout << "Enter the total number of strings: ";
    cin >> n;
    
    mid arr[n];

    for (int i = 0; i < n; i++) {
        arr[i].takestring(i);
        arr[i].sortstring();
    }

    cout << "The sorted strings are:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i].show();
    }

    return 0;
}
