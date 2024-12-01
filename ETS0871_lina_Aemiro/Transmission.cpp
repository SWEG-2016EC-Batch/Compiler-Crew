#include <iostream>
using namespace std;

int main() {
    // Constants
    const int TRANSMISSION_RATE = 960; // Characters per second
    const long FILE_SIZE = 419430400; // File size in bytes (400MB)

    // Calculate the transmission time
    long timeInSeconds = FILE_SIZE / TRANSMISSION_RATE;

    // Convert time to days, hours, minutes, and seconds
    int days = timeInSeconds / (24 * 3600);
    timeInSeconds %= (24 * 3600);
    int hours = timeInSeconds / 3600;
    timeInSeconds %= 3600;
    int minutes = timeInSeconds / 60;
    int seconds = timeInSeconds % 60;

    // Output the result
    cout << "Time to send the file: " << days << " days, " << hours << " hours, "
         << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}
