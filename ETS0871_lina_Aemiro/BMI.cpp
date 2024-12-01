#include <iostream>
using namespace std;

int main() {
    char key = 'y';

    while (key != 'x' && key != 'X') {
        double weight, height, bmi;
        cout << "Enter weight (kg): ";
        cin >> weight;
        cout << "Enter height (m): ";
        cin >> height;

        bmi = weight / (height * height);
        cout << "BMI: " << bmi << endl;

        if (bmi < 18.5) {
            cout << "Status: Underweight" << endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "Status: Normal weight" << endl;
        } else {
            cout << "Status: Overweight" << endl;
        }

        cout << "Press 'x' to exit or any other key to continue: ";
        cin >> key;
    }

    return 0;
}
