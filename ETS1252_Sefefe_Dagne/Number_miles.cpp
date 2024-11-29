#include <iostream>
using namespace std;

int main() {
    double tank_Capacity, miles_PerGallon, total_Miles;

    // Input the tank capacity of your automobile
    cout << "Enter the fuel tank capacity in gallons that your automobile can hold: "<<endl;
    cin >> tank_Capacity;

    // Input miles per gallon that your automobile can move
    cout << "Enter the miles per gallon that your automobile can travel: ";
    cin >> miles_PerGallon;

    // Calculate the total miles that your automobile can move
    total_Miles = tank_Capacity * miles_PerGallon;

    
    cout << "You can drive your automobile for about  " << total_Miles << " miles without refueling." << endl;

    return 0;
}
