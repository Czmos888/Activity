#include <iostream>
using namespace std;

double calculateRetailPrice(double wholesaleCost, double markupPercentage) {

    double retailPrice = wholesaleCost + (wholesaleCost * (markupPercentage / 100.0));
    return retailPrice;
}

int main() {
    double wholesaleCost, markupPercentage;

    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;

    cout << "Enter the item's markup percentage: ";
    cin >> markupPercentage;

    double retailPrice = calculateRetailPrice(wholesaleCost, markupPercentage);

    cout << "The item's retail price is: " << retailPrice << endl;

    return 0;
}