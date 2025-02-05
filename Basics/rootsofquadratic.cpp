#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b, c, r1, r2;
    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        cout << "The value of 'a' must not be zero for a quadratic equation." << endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "The equation has complex roots." << endl;
    } else {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots of the equation are: " << r1 << " and " << r2 << endl;
    }
    
    return 0;
}
