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
switch (choice) {
    case 1: { // Reserve a Room
        int room_type; // Variable to store selected room type
        cout << "\nSelect Room Type:\n";
        cout << "1. Ocean View Suite (Rooms 1-60)\n";
        cout << "2. Poolside Villa (Rooms 61-110)\n";
        cout << "3. Garden View Room (Rooms 111-150)\n";
        cout << "Enter your choice: ";
        cin >> room_type; // Get room type choice

        // Validate room type input
        if (cin.fail() || room_type < 1 || room_type > 3) {
            cout << "Invalid choice. Please try again.\n\n";
            continue; // Restart loop
        }

        // Check room availability based on selected type
        if ((room_type == 1 && i >= 60) ||
            (room_type == 2 && u >= 110) ||
            (room_type == 3 && m >= total_number_room)) {
            cout << "Selected room type is fully booked. Please choose a different type.\n\n";
            continue; // Restart loop
        }

        // Pointers for current guest data
        char *current_name;
        char *current_gender;
        int *current_age;
        char *current_id;
        int *current_reservation_code;

        // Assign current pointers based on selected room type
        if (room_type == 1) {
            current_name = guest_name[i];
            current_gender = guest_gender[i];
            current_age = &guest_age[i];
            current_id = guest_id[i];
            current_reservation_code = &reservation_code[i];
        } else if (room_type == 2) {
            current_name = guest_name[u];
            current_gender = guest_gender[u];
            current_age = &guest_age[u];
            current_id = guest_id[u];
            current_reservation_code = &reservation_code[u];
        } else {
            current_name = guest_name[m];
            current_gender = guest_gender[m];
            current_age = &guest_age[m];
            current_id = guest_id[m];
            current_reservation_code = &reservation_code[m];
        }

        // Get guest details
        cout << "Enter guest name: ";
        cin.ignore(); // Ignore leftover newline
        cin.getline(current_name, 20); // Read guest name
        cout << "Enter gender: ";
        cin.getline(current_gender, 20); // Read guest gender
        cout << "Enter age: ";
        cin >> *current_age; // Read guest age

        // Check age requirement
        if (*current_age < 18) {
            cout << "Sorry, guest must be at least 18 years old to reserve a room.\n\n";
            continue; // Restart loop
        }

        cout << "Enter ID or Passport Number: ";
        cin.ignore(); // Ignore leftover newline
        cin.getline(current_id, 20); // Read guest ID
        cout << "Enter reservation code: ";
        cin >> *current_reservation_code; // Read reservation code

        // Mark room as reserved based on room type
        if (room_type == 1) {
            guest_reservation[i] = 1; // Mark room as reserved
            room_number = ++i; // Increment room counter
        } else if (room_type == 2) {
            guest_reservation[u] = 1; // Mark room as reserved
            room_number = ++u; // Increment room counter
        } else {
            guest_reservation[m] = 1; // Mark room as reserved
            room_number = ++m; // Increment room counter
        }

        cout << "Your room is reserved.\n";
        cout << "Your room number is: " << room_number << endl; // Show room number
        cout << "\n\n\n"; // Three new lines before next option
        break;
    }
}
