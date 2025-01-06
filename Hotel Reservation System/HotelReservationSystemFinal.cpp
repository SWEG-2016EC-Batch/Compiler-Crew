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

  if ((room_type == 1 && i >= 60) ||
                (room_type == 2 && u >= 110) ||
                (room_type == 3 && m >= total_number_room)) {
                cout << "Selected room type is fully booked. Please choose a different type.\n\n";
                continue; // Restart the loop for a different selection
            }

            char * current_name = nullptr;
            char * current_gender = nullptr;
            int * current_age = nullptr;
            char * current_id = nullptr;
            int * current_reservation_code = nullptr;

            if (room_type == 1) {
                current_name = guest_name[i];
                current_gender = guest_gender[i];
                current_age = & guest_age[i];
                current_id = guest_id[i];
                current_reservation_code = & reservation_code[i];
            } else if (room_type == 2) {
                current_name = guest_name[u];
                current_gender = guest_gender[u];
                current_age = & guest_age[u];
                current_id = guest_id[u];
                current_reservation_code = & reservation_code[u];
            } else {
                current_name = guest_name[m];
                current_gender = guest_gender[m];
                current_age = & guest_age[m];
                current_id = guest_id[m];
                current_reservation_code = & reservation_code[m];
            }

            bool validName = false;
            while (!validName) {
                cout << "Enter guest name: ";
                cin.ignore(); // Clear input buffer
                cin.getline(current_name, 20); // Get the guest's name
                validName = true; // Assume valid name unless proven otherwise
                for (int i = 0; i < strlen(current_name); ++i) {
                    if (!isalpha(current_name[i]) && current_name[i] != ' ') {
                        validName = false;
                        break; // Invalid name, exit loop
                    }
                }
                if (!validName) {
                    cout << "Invalid input. Please enter a valid name (letters and spaces only).\n";
                }
            }

            // Gender and age input validation, Reservation code input and room assignment
            bool validGender = false;
            while (!validGender) {
                cout << "Enter gender (M/F): ";
                cin.getline(current_gender, 20);
                if (strlen(current_gender) == 1 &&
                    (current_gender[0] == 'M' || current_gender[0] == 'm' ||
                        current_gender[0] == 'F' || current_gender[0] == 'f')) {
                    validGender = true; // Gender input is valid
                } else {
                    cout << "Invalid input. Please enter 'M' or 'F' only.\n";
                }
            }

            bool validAge = false;
            while (!validAge) {
                cout << "Enter age: ";
                cin >> * current_age; // Get the guest's age
                if (cin.fail() || * current_age < 18) {
                    cout << "Invalid input. Please enter a valid age (numbers only and at least 18).\n";
                    cin.clear();
                    cin.ignore();
                } else {
                    validAge = true; // Age input is valid
                }
            }

            cout << "Enter ID or Passport Number: ";
            cin.ignore(); // Clear input buffer
            cin.getline(current_id, 20);
            cout << "Enter reservation code: ";
            cin >> * current_reservation_code;

            if (room_type == 1) {
                guest_reservation[i] = 1;
                room_number = ++i; // Update next available room number
            } else if (room_type == 2) {
                guest_reservation[u] = 1;
                room_number = ++u;
            } else {
                guest_reservation[m] = 1;
                room_number = ++m;
            }

            cout << "Your room is reserved.\n";
            cout << "Your room number is: " << room_number << endl;
            cout << "\n\n\n";
            break; // Break out of the case
        }
  case 2: {
            cout << "Ocean View Suites (Rooms 1-60)         | Poolside Villas (Rooms 61-110)       | Garden View Rooms (Rooms 111-150)" << endl;
            cout << "----------------------------------------------------------------------------------------------------" << endl;
            for (int k = 0; k < 60; ++k) {
                cout << left << setw(30) << ("Room number " + to_string(k + 1) + (guest_reservation[k] ? " is reserved" : " is available"));
                cout << "\t\t";
                if (k + 60 < total_number_room) {
                    cout << left << setw(30) << ("Room number " + to_string(k + 61) + (guest_reservation[k + 60] ? " is reserved" : " is available"));
                    cout << "\t\t";
                }
                if (k + 110 < total_number_room) {
                    cout << left << setw(30) << ("Room number " + to_string(k + 111) + (guest_reservation[k + 110] ? " is reserved" : " is available"));
                    cout << "\t\t";
                }
                cout << endl; // New line for the next room status
            }
            cout << "\n\n\n";
            break; // Break out of the case
        }

        case 3: { // Get help with booking
            cout << "Get Help With Booking:\n";
            cout << "1. Search Guest\n";
            cout << "2. Edit Guest Data\n";
            cout << "3. Cancel Reservation\n";
            cout << "4. About Our Services\n";
            cout << "5. Contact Us\n";
            cout << "Enter your choice: ";
            int help_choice;
            cin >> help_choice;

            switch (help_choice) {
            case 1: { // Search guest
                cout << "Search Options:\n";
                cout << "1. Search by Name\n";
                cout << "2. Search by Reservation Code\n";
                cout << "Enter your choice: ";
                int search_choice;
                cin >> search_choice;

                switch (search_choice) {
                case 1: { // Search by guest name
                    char name[20];
                    cout << "Enter guest name: ";
                    cin.ignore();
                    cin.getline(name, 20);
                    for (int k = 0; k < total_number_room; ++k) {
                        if (strcmp(guest_name[k], name) == 0) {
                            cout << "\nGuest Found:\n";
                            cout << "Room Number: " << k + 1 << "\n";
                            cout << "Name: " << guest_name[k] << "\n";
                            cout << "Gender: " << guest_gender[k] << "\n";
                            cout << "Age: " << guest_age[k] << "\n";
                            cout << "ID/Passport Number: " << guest_id[k] << "\n";
                            cout << "Reservation Code: " << reservation_code[k] << "\n\n";
                            found = true; // Set found flag
                            break; // Exit loop once found
                        }
                    }
                    if (!found) {
                        cout << "No guest found with the name: " << name << "\n\n";
                    }
                    found = false; // Reset found flag
                    break; // Break out of the case
                }
                case 2: { // Search by reservation code
                    int res_code;
                    cout << "Please Enter the reservation code: ";
                    cin >> res_code;
                    for (int k = 0; k < total_number_room; ++k) {
                        if (res_code == reservation_code[k]) {
                            cout << "\nGuest Found:\n";
                            cout << "Room Number: " << k + 1 << "\n";
                            cout << "Name: " << guest_name[k] << "\n";
                            cout << "Gender: " << guest_gender[k] << "\n";
                            cout << "Age: " << guest_age[k] << "\n";
                            cout << "ID/Passport Number: " << guest_id[k] << "\n";
                            cout << "Reservation Code: " << reservation_code[k] << "\n\n";
                            found = true; // Set found flag
                            break; // Exit loop once found
                        }
                    }
                    if (!found) {
                        cout << "No such reservation code found\n\n";
                    }
                    found = false; // Reset found flag
                    break; // Break out of the case
                }
                default:
                    cout << "Invalid choice. Returning to main menu.\n\n";
                    break; // Invalid input handling
                }
                break; // Break out of the case
            }          
            case 2: { // Edit guest data
                int res_code;
                cout << "Please Enter the reservation code: ";
                cin >> res_code;
                for (int k = 0; k < total_number_room; ++k) {
                    if (res_code == reservation_code[k]) {
                        guest_reservation[k] = 0; // Mark the room as available
                        strcpy(guest_name[k], ""); // Clear name
                        strcpy(guest_gender[k], ""); // Clear gender
                        guest_age[k] = 0; // Clear age
                        strcpy(guest_id[k], ""); // Clear ID
                        reservation_code[k] = 0; // Clear reservation code

                        int room_type;
                        cout << "\nSelect New Room Type:\n";
                        cout << "1. Ocean View Suite (Rooms 1-60)\n";
                        cout << "2. Poolside Villa (Rooms 61-110)\n";
                        cout << "3. Garden View Room (Rooms 111-150)\n";
                        cout << "Enter your choice: ";
                        cin >> room_type;

                        if (cin.fail() || room_type < 1 || room_type > 3) {
                            cout << "Invalid choice. Please try again.\n\n";
                            continue; // Restart the loop for valid input
                        }

                        int new_room_number = -1; // Initialize new room number
                        if (room_type == 1 && i < 60) { // Ocean View Suite
                            new_room_number = i++;
                        } else if (room_type == 2 && u < 110) { // Poolside Villa
                            new_room_number = u++;
                        } else if (room_type == 3 && m < total_number_room) { // Garden View Room
                            new_room_number = m++;
                        } else {
                            cout << "Selected room type is fully booked. Please choose a different type.\n\n";
                            continue; // Restart the loop for a different selection
                        }

                        char * current_name = guest_name[new_room_number];
                        char * current_gender = guest_gender[new_room_number];
                        int * current_age = & guest_age[new_room_number];
                        char * current_id = guest_id[new_room_number];
                        int * current_reservation_code = & reservation_code[new_room_number];

                        bool validName = false;
                        while (!validName) {
                            cout << "Enter guest name: ";
                            cin.ignore(); // Clear input buffer
                            cin.getline(current_name, 20); // Get the guest's name
                            validName = true; // Assume valid name unless proven otherwise
                            for (int i = 0; i < strlen(current_name); ++i) {
                                if (!isalpha(current_name[i]) && current_name[i] != ' ') {
                                    validName = false;
                                    break; // Invalid name, exit loop
                                }
                            }
                            if (!validName) {
                                cout << "Invalid input. Please enter a valid name (letters and spaces only).\n";
                            }
                        }

                        bool validGender = false;
                        while (!validGender) {
                            cout << "Enter gender (M/F): ";
                            cin.getline(current_gender, 20);
                            if (strlen(current_gender) == 1 &&
                                (current_gender[0] == 'M' || current_gender[0] == 'm' ||
                                    current_gender[0] == 'F' || current_gender[0] == 'f')) {
                                validGender = true; // Gender input is valid
                            } else {
                                cout << "Invalid input. Please enter 'M' or 'F' only.\n";
                            }
                        }

                        bool validAge = false;
                        while (!validAge) {
                            cout << "Enter age: ";
                            cin >> * current_age; // Get the guest's age
                            if (cin.fail() || * current_age < 18) {
                                cout << "Invalid input. Please enter a valid age (numbers only and at least 18).\n";
                                cin.clear();
                                cin.ignore();
                            } else {
                                validAge = true; // Age input is valid
                            }
                        }

                        cout << "Enter ID or Passport Number: ";
                        cin.ignore(); // Clear input buffer
                        cin.getline(current_id, 20);
                        cout << "Enter reservation code: ";
                        cin >> * current_reservation_code;

                        guest_reservation[new_room_number] = 1; // Mark the room as reserved again
                        cout << "Your information has been modified.\n";
                        cout << "Your new room number is: " << (new_room_number + 1) << endl; // Display the new room number
                        found = true; // Set found flag
                        break; // Exit the loop
                    }
                }
                if (!found) {
                    cout << "No such reservation code found\n\n"; // Error message for invalid reservation code
                }
                found = false; // Reset found flag
                break; // Break out of the case
            }
            case 3: { // Cancel Reservation
                int res_code;
                cout << "Please enter your reservation code to cancel: ";
                cin >> res_code;
                for (int k = 0; k < total_number_room; ++k) {
                    if (res_code == reservation_code[k]) {
                        guest_reservation[k] = 0; // Mark the room as available
                        strcpy(guest_name[k], ""); // Clear name
                        strcpy(guest_gender[k], ""); // Clear gender
                        guest_age[k] = 0; // Clear age
                        strcpy(guest_id[k], ""); // Clear ID
                        reservation_code[k] = 0; // Clear reservation code
                        cout << "Reservation cancelled for room number: " << k + 1 << "\n\n";
                        found = true; // Set found flag
                        break; // Exit the loop
                    }
                }
                if (!found) {
                    cout << "No such reservation code found. Unable to cancel.\n\n"; // If no reservation found
                }
                found = false; // Reset found flag
                break; // Exit this case
            }
            case 4: { // About Our Services
                cout << "\nAbout Our Services:\n";
                cout << "We offer a variety of accommodations to suit your needs:\n";
                cout << "1. Ocean View Suite: Enjoy breathtaking views of the ocean with luxurious amenities.\n";
                cout << "2. Poolside Villa: Relax by the pool in our spacious and elegant villas.\n";
                cout << "3. Garden View Room: Experience tranquility in our cozy garden view rooms.\n";
                cout << "All rooms come with top-notch service and facilities to ensure a memorable stay.\n\n";
                break; // Break out of the case
            }
            case 5: { // Contact Us
                cout << "Contact Us:\n";
                cout << "Phone Number: +1234567890\n";
                cout << "Social Media: @HotelSocialMedia\n\n";
                break; // Break out of the case
            }
            default:
                cout << "Invalid choice. Returning to main menu.\n\n";
                break; // Invalid input handling
            }
            break; // Break out of the case
        }
        default:
            break; // Default case handling
        }
    }

    // Clean up dynamically allocated memory
    for (int k = 0; k < total_number_room; ++k) {
        delete[] guest_name[k];
        delete[] guest_gender[k];
        delete[] guest_id[k];
    }
    delete[] guest_reservation;
    delete[] guest_name;
    delete[] guest_gender;
    delete[] guest_age;
    delete[] reservation_code;
    delete[] guest_id;

    return 0;
}


