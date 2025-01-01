#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Guest {
    string name;
    string gender;
    int age;
    string reservationCode;
    int roomNumber;
    string roomType;
};

vector<Guest> guests;
unordered_map<string, Guest> guestMap;
unordered_map<int, bool> roomStatus;
int totalRooms = 150;

// Room types and bounds as arrays
string roomTypes[] = {"Ocean View Suite", "Poolside Villa", "Garden View Room"};
int roomTypeBounds[] = {60, 110, 150};

// Function to get valid integer input within a range
int getValidIntInput() {
    int input;
    cin >> input;
    cin.ignore();
    return input;
}

int main() {
    srand(time(0)); // Seed for random number generation

    int roomsToPreBook = totalRooms * 0.5; // 50% of rooms

    // Pre-booking 50% of the rooms with random scattering
    for (int i = 0; i < roomsToPreBook; ++i) {
        int roomNumber;
        do {
            roomNumber = rand() % totalRooms + 1;
        } while (roomStatus[roomNumber]); // Ensure unique room selection

        string roomType;
        if (roomNumber <= roomTypeBounds[0]) roomType = roomTypes[0];
        else if (roomNumber <= roomTypeBounds[1]) roomType = roomTypes[1];
        else roomType = roomTypes[2];

        Guest guest = {"Guest" + to_string(i+1), "Gender" + to_string(i % 2 + 1), 30 + (i % 10), "Code" + to_string(i+1), roomNumber, roomType};
        guests.push_back(guest);
        guestMap[guest.reservationCode] = guest;
        roomStatus[roomNumber] = true; // Mark room as reserved
    }

    int choice;
    while (true) {
        cout << "******************************" << endl;
        cout << "WELCOME TO THE COMPILER CREW\nHOTEL ROOM RESERVATION PORTAL" << endl;
        cout << "******************************" << endl;
        cout << "1. Reserve a Room" << endl;
        cout << "2. View Room Status" << endl;
        cout << "3. Search Guest by Name" << endl;
        cout << "4. Search Reservation by Code" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        choice = getValidIntInput();

        if (choice == 1) {
            int roomChoice;
            cout << "\nSelect Room Type:" << endl;
            cout << "1. Ocean View Suite (Rooms 1-60)" << endl;
            cout << "2. Poolside Villa (Rooms 61-110)" << endl;
            cout << "3. Garden View Room (Rooms 111-150)" << endl;
            cout << "Enter your choice: ";
            roomChoice = getValidIntInput();

            int start, end;
            string roomType;
            if (roomChoice == 1) {
                start = 1;
                end = 60;
                roomType = "Ocean View Suite";
            } else if (roomChoice == 2) {
                start = 61;
                end = 110;
                roomType = "Poolside Villa";
            } else if (roomChoice == 3) {
                start = 111;
                end = 150;
                roomType = "Garden View Room";
            }

            bool roomAssigned = false;
            for (int roomNumber = start; roomNumber <= end; ++roomNumber) {
                if (!roomStatus[roomNumber]) {
                    Guest* newGuest = new Guest;
                    cout << "Enter guest name: ";
                    getline(cin, newGuest->name);

                    cout << "Enter gender: ";
                    getline(cin, newGuest->gender);

                    cout << "Enter age: ";
                    newGuest->age = getValidIntInput();

                    cout << "Enter reservation code: ";
                    getline(cin, newGuest->reservationCode);

                    newGuest->roomNumber = roomNumber;
                    newGuest->roomType = roomType;

                    guests.push_back(*newGuest);
                    guestMap[newGuest->reservationCode] = *newGuest;
                    roomStatus[roomNumber] = true; // Mark room as reserved

                    cout << "Your room is reserved. Your room number is: " << roomNumber << endl;
                    roomAssigned = true;
                    break;
                }
            }

            if (!roomAssigned) {
                cout << "All rooms of this type are fully booked. Would you like to book another room type? (yes/no): ";
                string response;
                getline(cin, response);
                if (response == "yes") {
                    continue;
                } else {
                    cout << "No room available." << endl;
                }
            }
        } else if (choice == 2) {
            cout << "\nRoom Status:" << endl;
            for (int roomNumber = 1; roomNumber <= totalRooms; ++roomNumber) {
                if (roomStatus[roomNumber]) {
                    cout << "Room Number " << roomNumber << ": Reserved" << endl;
                } else {
                    cout << "Room Number " << roomNumber << ": Available" << endl;
                }
            }
        } else if (choice == 3) {
            string name;
            cout << "\nEnter guest name: ";
            getline(cin, name);

            bool found = false;
            for (const auto& guest : guests) {
                if (guest.name == name) {
                    cout << "\nGuest Found:\n";
                    cout << "Room Number: " << guest.roomNumber << "\n";
                    cout << "Name: " << guest.name << "\n";
                    cout << "Gender: " << guest.gender << "\n";
                    cout << "Age: " << guest.age << "\n";
                    cout << "Reservation Code: " << guest.reservationCode << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No guest found with the name: " << name << "\n";
            }
        } else if (choice == 4) {
            string reservationCode;
            cout << "\nEnter reservation code to search: ";
            getline(cin, reservationCode);
            if (guestMap.find(reservationCode) != guestMap.end()) {
                const Guest* guest = &guestMap.at(reservationCode);
                cout << "Reservation found:\n";
                cout << "Name: " << guest->name << "\n";
                cout << "Gender: " << guest->gender << "\n";
                cout << "Age: " << guest->age << "\n";
                cout << "Room Number: " << guest->roomNumber << "\n";
                cout << "Room Type: " << guest->roomType << "\n";
            } else {
                cout << "No reservation found with that code." << endl;
            }
        } else if (choice == 5) {
            cout << "Exiting the portal. Have a great day!\n";
            return 0;
        }
    }
}
