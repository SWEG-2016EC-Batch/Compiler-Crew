#include <iostream>
using namespace std;

int main() {
    float weight, height, BMI, age;
    int n;
    cout << "This program can be used to calculate your Body Mass Index (BMI)\n";
    cout << "BMI estimates body fat using height and weight\nIt's a useful tool to see if you are underweight, normal weight or overweight\n";
    cout << "BMI is calculated by the formula: BMI = weight / (height * height)\n";
    cout << "****************\n";
    cout << "For how many people are you going to calculate BMI: ";
    number_entry:
    cin >> n;
    if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore();
            cout << "Wrong input. Please enter a valid number: ";
            goto number_entry;
        }

    for (int i = 1; i <= n; i++) {
        weight_entry:
        cout << "Enter a person's weight in kilograms: ";
        cin >> weight;
        if (cin.fail() || weight <= 0) {
            cin.clear();
            cin.ignore();
            cout << "Wrong input. Please enter a valid weight: ";
            goto weight_entry;
        }

        height_entry:
        cout << "Enter a person's height in meters: ";
        cin >> height;
        if (cin.fail() || height <= 0) {
            cin.clear();
            cin.ignore();
            cout << "Wrong input. Please enter a valid height: ";
            goto height_entry;
        }

        BMI = weight / (height * height);

        age_entry:
        cout << "Enter a person's age in years: ";
        cin >> age;
        if (cin.fail() || age < 2) {
            cin.clear();
            cin.ignore();
            cout << "Wrong input. Please enter a valid age: ";
            goto age_entry;
        }

        cout << "That person's BMI is: " << BMI << endl;
        if (age >= 2 && age <= 12) {
            if (BMI < 14) {
                cout << "He/She is underweight\n";
            } else if (BMI >= 14 && BMI < 18) {
                cout << "He/She has normal weight\n";
            } else{
                cout << "He/She is overweight\n";
            }
        } else {
            if (BMI < 18.5) {
                cout << "He/She is underweight\n";
            } else if (BMI >= 18.5 && BMI < 24.9) {
                cout << "He/She has normal weight\n";
            } else {
                cout << "He/She is overweight\n";
            }
        }
        cout << "****************\n";
    }

    return 0;
}
