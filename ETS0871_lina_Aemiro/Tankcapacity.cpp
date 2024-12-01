#include <iostream>
using namespace std;

int main() {
    double tank_capacity, miles_per_gallon, total_miles;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tank_capacity;

    cout << "Enter the miles per gallon (MPG) the automobile can drive: ";
    cin >> miles_per_gallon;

    total_miles = tank_capacity * miles_per_gallon;

    cout << "The automobile can be driven " << total_miles << " miles without refueling." << endl;

    return 0;
}
