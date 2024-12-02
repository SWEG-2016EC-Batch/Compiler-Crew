#include <iostream>
using namespace std;

int main(){
    float gallons, miles, miles_per_gallon;

    line7:
    cout << "Enter amount of fuel in the fuel tank (in gallons): ";
    cin >> gallons;

    if (cin.fail() || gallons <= 0){
        cout << "Invalid input, please try again\n";
        cin.clear();
        cin.ignore();
        goto line7;
    }
    line17:
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> miles_per_gallon;

    if (cin.fail() || miles_per_gallon <= 0){
        cout << "Invalid input, please try again\n";
        cin.clear();
        cin.ignore();
        goto line17;
    }
  // calculate the miles
    miles = gallons * miles_per_gallon;

    cout << "The automobile can be driven " << miles << " miles without refueling!";

    return 0;
}
