#include <iostream>
#include <cmath> // for pow function
using namespace std;

int main() {
    float x, y, result;

    
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;

    // Calculate x raised to the power y
    result = pow(x, y);

    cout << x << " raised to the power " << y << " is: " << result << endl;

    return 0;
}
