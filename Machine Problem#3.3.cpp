#include <iostream>
using namespace std;

double computeSquarePerimeter(double side) {
    return 4 * side;
}
double computeRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}
double computeCirclePerimeter(double radius) {
    const double PI = 3.14159; // Approximation of Pi
    return 2 * PI * radius;
}
int main() {
    double side, length, width, radius;

    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Perimeter of the square: " << computeSquarePerimeter(side) << endl;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Perimeter of the rectangle: " << computeRectanglePerimeter(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Circumference of the circle: " << computeCirclePerimeter(radius) << endl;

    return 0;
}