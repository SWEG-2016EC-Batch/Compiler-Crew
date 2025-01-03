#include <iostream>
#include <iomanip> // Include iomanip for column alignment
#include <cstring> // Include cstring for string operations
using namespace std;

const int total_number_room = 150; // Define total number of rooms

int main() {
    // Dynamically allocate memory for reservation status (0 = available, 1 = reserved)
    int *guest_reservation = new int[total_number_room](); // Array initialized to 0
    // Dynamically allocate memory for guest names, genders, IDs
    char **guest_name = new char*[total_number_room]; // Array of pointers for names
    char **guest_gender = new char*[total_number_room]; // Array of pointers for genders
    int *guest_age = new int[total_number_room]; // Array for guest ages
    int *reservation_code = new int[total_number_room]; // Array for reservation codes
    char **guest_id = new char*[total_number_room]; // Array of pointers for guest IDs

    // Allocate memory for individual guest name, gender, and ID strings
    for (int i = 0; i < total_number_room; ++i) {
        guest_name[i] = new char[20]; // Allocate 20 chars for name
        guest_gender[i] = new char[20]; // Allocate 20 chars for gender
        guest_id[i] = new char[20]; // Allocate 20 chars for ID
    }

    // Variables for user input and room tracking
    int choice, room_number = 1; // Room number starts at 1
    int i = 0, u = 60, m = 110; // Counters for room types
    bool found = false; // Flag to check if guest is found

    // Main loop for hotel reservation system
    while (true) {
        // Display welcome message
        cout << "******" << endl;
        cout << "WELCOME TO THE COMPILER CREW\nHOTEL ROOM RESERVATION PORTAL" << endl;
        cout << "******" << endl;

        // Menu for user options
        cout << "Which service do you want?" << endl;
        cout << "1. Reserve a Room\n";
        cout << "2. View Room Status\n"; // View Room Status option
        cout << "3. Get Help With Booking\n"; // Get Help With Booking option
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Get user choice

        // Validate user input
        if (cin.fail()  choice < 1  choice > 4) {
            cout << "Please enter a number between 1 and 4" << endl;
            cin.clear(); // Clear input error
            cin.ignore(); // Ignore bad input
            continue; // Restart loop
        }

        // Exit option
        if (choice == 4) {
            cout << "Exiting... Thank You!\n";
            break; // Exit the loop
        }
