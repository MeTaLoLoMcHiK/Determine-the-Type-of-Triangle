#include <iostream>

using namespace std;

string triangleType(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return "Not a triangle";

    if (a == b && b == c) return "Equilateral triangle";
    if (a == b || b == c || a == c) return "Isosceles triangle";
    if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
        return "Right triangle";
    return "Scalene triangle";
}

int main() {
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    cout << "The triangle type is: " << triangleType(a, b, c) << endl;

    return 0;
}
