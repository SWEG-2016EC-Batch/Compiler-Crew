#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
const int total_number_room = 150;

int main() {
    int * guest_reservation = new int[total_number_room](); // Track room reservations
    char ** guest_name = new char * [total_number_room]; // Array for guest names
    char ** guest_gender = new char * [total_number_room]; // Array for guest genders
    int * guest_age = new int[total_number_room]; // Array for guest ages
    int * reservation_code = new int[total_number_room]; // Array for reservation codes
    char ** guest_id = new char * [total_number_room]; // Array for guest IDs

    for (int i = 0; i < total_number_room; ++i) {
        guest_name[i] = new char[20]; // Allocate space for the guest's name
        guest_gender[i] = new char[20]; // Allocate space for the guest's gender
        guest_id[i] = new char[20]; // Allocate space for the guest's ID
    }

    int choice, room_number = 1;
    int i = 0, u = 60, m = 110; // Track next available rooms for each type
    bool found = false; // Flag to check if a guest is found

    while (true) {
        cout << "******************************" << endl;
        cout << "WELCOME TO THE COMPILER CREW\nHOTEL ROOM RESERVATION PORTAL" << endl;
        cout << "******************************" << endl;
        cout << "Which service do you want?" << endl;
        cout << "1. Reserve a Room\n";
        cout << "2. View Room Status\n";
        cout << "3. Get Help With Booking\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cout << "Please enter a number between 1 and 4" << endl;
            cin.clear();
            cin.ignore();
            continue; // Restart the loop for valid input
        }

        if (choice == 4) {
            cout << "Exiting... Thank You!\n";
            break; // Exit the loop
        }

        switch (choice) {
        case 1: {
            int room_type;
            cout << "\nSelect Room Type:\n";
            cout << "1. Ocean View Suite (Rooms 1-60)\n";
            cout << "2. Poolside Villa (Rooms 61-110)\n";
            cout << "3. Garden View Room (Rooms 111-150)\n";
            cout << "Enter your choice: ";
            cin >> room_type;
            if (cin.fail() || room_type < 1 || room_type > 3) {
                cout << "Invalid choice. Please try again.\n\n";
                cin.clear();
                cin.ignore();
                continue; // Restart the loop for valid input
            }
