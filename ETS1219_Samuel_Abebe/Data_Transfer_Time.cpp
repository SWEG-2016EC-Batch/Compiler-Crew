#include <iostream>
using namespace std;
int main(){
    float file_size, bits;
    int char_per_sec = 960;
    cout<<"This program can be used to find how long it will take to \ntransfer a file over a 960 Character per Second transfer line.\n";
    cout<<"**********************************\n";
    file_size_entry:
    cout<<"Enter file size in MB (Mega Bytes): ";
    cin>>file_size;
    if(cin.fail() || file_size <= 0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again.\n";
        goto file_size_entry;
    }

    bits = file_size*1048576;
    cout<<"Convert MB to bytes: "<<file_size<<"MB * 1024KB/MB *1024B/KB = "<<bits<<" bits\n";
    cout<<"Amount of time it will take to send you file is: "<<bits<<" / "<<char_per_sec<<" = "<<bits/char_per_sec<<" seconds\n";
    cout<<"This is: "<<(bits/char_per_sec) / 86400<<" days\n";
    cout<<"Exiting... Thank You";

    return 0;
}
