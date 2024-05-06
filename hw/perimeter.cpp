#include <iostream>
using namespace std;

bool isValidTriangle(int a, int b, int c) {

    // Check the triangle inequality theorem
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;

    // If none of the above conditions are violated, the triangle is valid
    return true;
}



int main() {
    int side1, side2, side3;
    
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (isValidTriangle(side1, side2, side3))
        cout << "It forms a valid triangle." << endl;
    else
        cout << "It does not form a valid triangle." << endl;

    return 0;
}
