#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n1. Convert to kilometers" << endl;
    cout << "2. Convert to inches" << endl;
    cout << "3. Convert to feet" << endl;
    cout << "4. Quit the program" << endl;
    cout << "\nEnter your choice: ";
}
void showKilometers(double meters) {
    cout << meters << " meters is " << meters * 0.001 << " kilometers." << endl;
}
void showInches(double meters) {
    cout << meters << " meters is " << meters * 39.37 << " inches." << endl;
}
void showFeet(double meters) {
    cout << meters << " meters is " << meters * 3.281 << " feet." << endl;
}
int main() {
    double meters;
    int choice;
    do {
        cout << "Enter a distance in meters: ";
        cin >> meters;
        if (meters < 0)
            cout << "Error: Distance cannot be negative. Please enter a valid value." << endl;
    } while (meters < 0);
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                showKilometers(meters);
                break;
            case 2:
                showInches(meters);
                break;
            case 3:
                showFeet(meters);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);
    return 0;
}