/*A serial transmission line can transmit 960 characters per second. Write a program that will calculate how long it will take 
to send a file , given the file size . Test your program on a 400MB(419,430,400bytes) file which may take days.*/


#include <iostream>
using namespace std;

int main() {
    const int RateofTransmission = 960;
    double fileSize;
    double transmissionTimeInSeconds;

    cout << "can you enter the size of your file in bytes?"<<endl;
    cin >> fileSize;

    // we can now calculate the time required to transmit the files in seconds
    transmissionTimeInSeconds = fileSize / RateofTransmission;

    // now do all the processes so as to calculate the time in different units
    int days = transmissionTimeInSeconds / 86400;
    int hours = (transmissionTimeInSeconds - (days * 86400)) / 3600; 
    int minutes = (transmissionTimeInSeconds - (days * 86400) - (hours * 3600)) / 60;
    int seconds = transmissionTimeInSeconds - (days * 86400) - (hours * 3600) - (minutes * 60);

    //finally try to display the required time to transmit those files
    cout << "It will take " << days << " days, "<< hours << " hours, " << minutes << " minutes and " << seconds << " seconds" <<" to transmit the file."<< endl;

    return 0;
}
