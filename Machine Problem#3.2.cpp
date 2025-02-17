#include <iostream>
#include <cmath>
using namespace std;

double computeAverage(double num1, double num2) {
    return (num1 + num2) / 2.0;
}
double computeSumOfSquares(double num1, double num2) {
    return pow(num1, 2) + pow(num2, 2);
}
double computeSquareOfSum(double num1, double num2) {
    double sum = num1 + num2;
    return pow(sum, 2);
}
int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    double average = computeAverage(num1, num2);
    cout << "Average of the two numbers: " << average << endl;

    double sumOfSquares = computeSumOfSquares(num1, num2);
    cout << "Sum of the squares of the two numbers: " << sumOfSquares << endl;

    double squareOfSum = computeSquareOfSum(num1, num2);
    cout << "Square of the sum of the two numbers: " << squareOfSum << endl;

    return 0;
}