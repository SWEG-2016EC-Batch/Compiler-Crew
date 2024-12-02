
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double file_byte_size, transmission_time, total_seconds, total_minutes, total_hours, total_days;
    double transmission_rate_per_second = 960.0 / 256.0; // Convert characters per second to bytes per second

    cout << "Enter the transmission file size in bytes: ";
    cin >> file_byte_size;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1;
    }

    // Calculate the time for transmission
    total_seconds = file_byte_size / transmission_rate_per_second;
    total_minutes = total_seconds / 60;
    total_hours = total_minutes / 60;
    total_days = total_hours / 24;

    cout << "At a rate of " << transmission_rate_per_second 
         << " bytes per second, a file of " << file_byte_size 
         << " bytes will be transmitted in:" << endl;
    cout << total_seconds << " seconds," << endl;
    cout << total_minutes << " minutes," << endl;
    cout << total_hours << " hours, and " << endl;
    cout << round(total_days) << " days." << endl;

    return 0;
}

