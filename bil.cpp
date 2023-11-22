#include <iostream>
#include <string>

using namespace std;

// Function to calculate charges based on the units consumed
double calculateCharges(int units) {
    double charges = 50.00;

    if (units <= 100) {
        charges =charges+ (units * 0.60);
    } else if (units <= 300) {
        charges = charges + (100 * 0.60 + (units - 100) * 0.80);
    } else {
        charges = charges+ (100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90);
    }


    // Apply a 15% surcharge if total amount is more than Rs. 300
    if (charges > 300.00) {
        charges += 0.15 * charges;
    }

    return charges;
}

int main() {
    int numUsers;
    
    cout << "Enter the number of users: ";
    cin >> numUsers;


    for (int i = 0; i < numUsers; i++) {
        string userName;
        int unitsConsumed;

        cout << "Enter the name of user " << i + 1 << ": ";
        getline(cin, userName);

        cout << "Enter the number of units consumed by " << userName << ": ";
        cin >> unitsConsumed;

        double charges = calculateCharges(unitsConsumed);
        cout << "Charges for " << userName << ": Rs. " << charges << endl;

        cin.ignore(); // Clear newline character from the input buffer
    }

    return 0;
}
