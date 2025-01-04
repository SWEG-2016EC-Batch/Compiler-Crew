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
        cout << "******************************" << endl;
        cout << "WELCOME TO THE COMPILER CREW\nHOTEL ROOM RESERVATION PORTAL" << endl;
        cout << "******************************" << endl;

        // Menu for user options
        cout << "Which service do you want?" << endl;
        cout << "1. Reserve a Room\n";
        cout << "2. View Room Status\n"; // View Room Status option
        cout << "3. Get Help With Booking\n"; // Get Help With Booking option
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Get user choice

        // Validate user input
        if (cin.fail() || choice < 1 || choice > 4) {
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
    case 2: { // View Room Status
                room_number = 1; // Reset room number
                // Display room status header
                cout << "Ocean View Suites (Rooms 1-60)         | Poolside Villas (Rooms 61-110)       | Garden View Rooms (Rooms 111-150)" << endl;
                cout << "----------------------------------------------------------------------------------------------------" << endl;

                // Loop through and display room status
                for (int k = 0; k < 60; ++k) {
                    cout << left << setw(30) << ("Room number " + to_string(k + 1) + (guest_reservation[k] ? " is reserved" : " is available"));
                    cout << "\t\t"; // Print tab for formatting

                    // Check Poolside Villas
                    if (k + 60 < total_number_room) {
                        cout << left << setw(30) << ("Room number " + to_string(k + 61) + (guest_reservation[k + 60] ? " is reserved" : " is available"));
                        cout << "\t\t"; // Print tab for formatting
                    }

                    // Check Garden View Rooms
                    if (k + 110 < total_number_room) {
                        cout << left << setw(30) << ("Room number " + to_string(k + 111) + (guest_reservation[k + 110] ? " is reserved" : " is available"));
                        cout << "\t\t"; // Print tab for formatting
                    }
                    cout << endl; // New line after each row
                }
                cout << "\n\n\n"; // Three new lines before next option
                break; // Exit this case
            }
 switch (help_choice) {
                    case 1: { // Search Guest
                        cout << "Search Options:\n";
                        cout << "1. Search by Name\n";
                        cout << "2. Search by Reservation Code\n";
                        cout << "Enter your choice: ";
                        int search_choice;
                        cin >> search_choice;

                        switch (search_choice) {
                            case 1: { // Search Guest by Name
                                char name[20]; // Array to hold the name input
                                cout << "Enter guest name: ";
                                cin.ignore(); // Ignore leftover newline
                                cin.getline(name, 20); // Read guest name

                                // Search for guest by name
                                for (int k = 0; k < total_number_room; ++k) {
                                    if (strcmp(guest_name[k], name) == 0) { // Compare names
                                        cout << "\nGuest Found:\n";
                                        cout << "Room Number: " << k + 1 << "\n";
                                        cout << "Name: " << guest_name[k] << "\n";
                                        cout << "Gender: " << guest_gender[k] << "\n";
                                        cout << "Age: " << guest_age[k] << "\n";
                                        cout << "ID/Passport Number: " << guest_id[k] << "\n";
                                        cout << "Reservation Code: " << reservation_code[k] << "\n\n"; // Space before next option
                                        found = true; // Set found flag
                                        break; // Exit the loop
                                    }
                                }

                                // If no guest found
                                if (!found) {
                                    cout << "No guest found with the name: " << name << "\n\n"; // Space before next option
                                }
                                found = false; // Reset found flag
                                break; // Exit this case
                            }

                            case 2: { // Search Guest by Reservation Code
                                int res_code; // Variable for reservation code input
                                cout << "Please Enter the reservation code: ";
                                cin >> res_code; // Get reservation code

                                // Search for guest by reservation code
                                for (int k = 0; k < total_number_room; ++k) {
                                    if (res_code == reservation_code[k]) { // Compare reservation codes
                                        cout << "\nGuest Found:\n";
                                        cout << "Room Number: " << k + 1 << "\n";
                                        cout << "Name: " << guest_name[k] << "\n";
                                        cout << "Gender: " << guest_gender[k] << "\n";
                                        cout << "Age: " << guest_age[k] << "\n";
                                        cout << "ID/Passport Number: " << guest_id[k] << "\n";
                                        cout << "Reservation Code: " << reservation_code[k] << "\n\n"; // Space before next option
                                        found = true; // Set found flag
                                        break; // Exit the loop
                                    }
                                }
// If no reservation found                               
                    if (!found) {
                                    cout << "No such reservation code found\n\n"; // Space before next option                                }
                                found = false; // Reset found flag                                break; // Exit this case
                            }
                            default:                                cout << "Invalid choice. Returning to main menu.\n\n"; // Space before next option
                                break;                        }
                        break; // Exit this case                    }
                    case 2: { // Cancel Reservation
                        int res_code; // Variable for reservation code input                        cout << "Please enter your reservation code to cancel: ";
                        cin >> res_code; // Get reservation code
                        // Search for reservation code                        for (int k = 0; k < total_number_room; ++k) {
                            if (res_code == reservation_code[k]) { // Compare reservation codes                                guest_reservation[k] = 0; // Cancel the reservation
                                cout << "Reservation cancelled for room number: " << k + 1 << "\n\n";                                found = true; // Set found flag
                                break; // Exit the loop                            }
                        }
                        // If no reservation found                        if (!found) {
                            cout << "No such reservation code found. Unable to cancel.\n\n";                        }
                        found = false; // Reset found flag                        break; // Exit this case
                    }
                    case 3: { // About Our Services                        cout << "\nAbout Our Services:\n";
                        cout << "We offer a variety of accommodations to suit your needs:\n";                        cout << "1. Ocean View Suite: Enjoy breathtaking views of the ocean with luxurious amenities.\n";
                        cout << "2. Poolside Villa: Relax by the pool in our spacious and elegant villas.\n";                        cout << "3. Garden View Room: Experience tranquility in our cozy garden view rooms.\n";
                        cout << "All rooms come with top-notch service and facilities to ensure a memorable stay.\n\n";                        break; // Exit this case
                    }
                    case 4: { // Contact Us                        cout << "Contact Us:\n";
                        cout << "Phone Number: +1234567890\n"; // Example phone number                        cout << "Social Media: @HotelSocialMedia\n\n"; // Example social media handle
                        break; // Exit this case                    }
                    default:
                        cout << "Invalid choice. Returning to main menu.\n\n"; // Space before next option                        break;
                }                break; // Exit this case
            }
            default:                break; // Default case (should not reach here)
        }    }
  // Free dynamically allocated memory to avoid memory leaks
    for (int k = 0; k < total_number_room; ++k) {
        delete[] guest_name[k]; // Free memory for guest names
        delete[] guest_gender[k]; // Free memory for guest genders
        delete[] guest_id[k]; // Free memory for guest IDs
    }
    delete[] guest_reservation; // Free memory for reservation status
    delete[] guest_name; // Free memory for guest names array
    delete[] guest_gender; // Free memory for guest genders array
    delete[] guest_age; // Free memory for guest ages array
    delete[] reservation_code; // Free memory for reservation codes array
    delete[] guest_id; // Free memory for guest IDs array

    return 0; // Indicate successful execution
}

