#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x, y, final_result; // variable declaration

    // specify the base of the question to be calculated
    cout << "Enter the base of the number (x): "<<endl;
    cin >> x;

    // specify the power raised to the base x
    cout << "please insert the exponent (y): "<<endl;
    cin >> y;

    // now calculate the result of x raised to the power of y
   final_result = pow(x, y);

    // Output the final result
    cout << "The final result of " << x << " raised to the power of " << y << " is: " << final_result << endl;
    cout <<"Thank you,sir";
    return 0;
}
