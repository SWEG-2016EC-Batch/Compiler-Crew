#include <iostream>
#include <cstring>
using namespace std;

const int total_number_room = 150;

int main() {
    int *guest_reservation = new int[total_number_room](); // Array used to store reservation, initialized to 0
    char **guest_name = new char*[total_number_room]; // Array of pointers to store guest names
    char **guest_gender = new char*[total_number_room]; // Array of pointers to store guest genders
    int *guest_age = new int[total_number_room]; // Array to store guest ages
    int *reservation_code = new int[total_number_room]; // Array to store reservation codes
    char **guest_id = new char*[total_number_room]; // Array of pointers to store guest ID or passport numbers

    for (int i = 0; i < total_number_room; ++i) {
        guest_name[i] = new char[20];
        guest_gender[i] = new char[20];
        guest_id[i] = new char[20];
    }

    int choice, room_number = 1;
    int i = 0, u = 60, m = 110;
    bool found = false;

    while (true) {
        cout << "******************************" << endl;
        cout << "WELCOME TO THE COMPILER CREW\nHOTEL ROOM RESERVATION PORTAL" << endl;
        cout << "******************************" << endl;

        cout << "Which service do you want?" << endl;
        cout << "1. Reserve a Room\n";
        cout << "2. View Room Status\n";
        cout << "3. Search Guest by Name\n";
        cout << "4. Search Guest by Reservation Code\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 5) {
            cout << "Please enter a number between 1 and 5" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }

        if (choice == 5) {
            cout << "Exiting... Thank You!\n";
            break;
        }

        switch (choice) {
            case 1: {
                int room_type;
                cout << "\nSelect Room Type:\n";
                cout << "1. Ocean View Suite (Rooms 1-60)\n"; // Ocean View Suites provide stunning views of the ocean and luxurious amenities.
                cout << "2. Poolside Villa (Rooms 61-110)\n"; // Poolside Villas offer direct access to the pool and a serene atmosphere.
                cout << "3. Garden View Room (Rooms 111-150)\n"; // Garden View Rooms are ideal for those who enjoy lush green surroundings.
                cout << "Enter your choice: ";
                cin >> room_type;

                if (room_type < 1 || room_type > 3) {
                    cout << "Invalid choice. Please try again.\n"; // Only three types of rooms are offered to cater to specific guest preferences.
                    continue;
                }

                if ((room_type == 1 && i >= 60) ||
                    (room_type == 2 && u >= 110) ||
                    (room_type == 3 && m >= total_number_room)) {
                    cout << "Selected room type is fully booked. Please choose a different type.\n";
                    continue;
                }

                char *current_name = room_type == 1 ? guest_name[i] : room_type == 2 ? guest_name[u] : guest_name[m];
                char *current_gender = room_type == 1 ? guest_gender[i] : room_type == 2 ? guest_gender[u] : guest_gender[m];
                int &current_age = room_type == 1 ? guest_age[i] : room_type == 2 ? guest_age[u] : guest_age[m];
                char *current_id = room_type == 1 ? guest_id[i] : room_type == 2 ? guest_id[u] : guest_id[m];
                int &current_reservation_code = room_type == 1 ? reservation_code[i] : room_type == 2 ? reservation_code[u] : reservation_code[m];

                cout << "Enter guest name: ";
                cin.ignore();
                cin.getline(current_name, 20);

                // Loop for validating gender input and normalizing to "Female" or "Male"
                while (true) {
                    cout << "Enter gender (F/M): ";
                    cin.getline(current_gender, 20);

                    if (strcmp(current_gender, "Female") == 0 || strcmp(current_gender, "female") == 0 ||
                        strcmp(current_gender, "F") == 0 || strcmp(current_gender, "f") == 0) {
                        strcpy(current_gender, "Female");
                        break;
                    } else if (strcmp(current_gender, "Male") == 0 || strcmp(current_gender, "male") == 0 ||
                               strcmp(current_gender, "M") == 0 || strcmp(current_gender, "m") == 0) {
                        strcpy(current_gender, "Male");
                        break;
                    } else {
                        cout << "Invalid gender. Please enter Female/Male/F/M only.\n";
                    }
                }

                cout << "Enter age: ";
                cin >> current_age;

                if (current_age < 18) { //TO Ensure only adults (18+) can reserve a room.
                    cout << "Sorry, guest must be at least 18 years old to reserve a room.\n";
                    continue;
                }

                cout << "Enter ID or Passport Number: "; // ID is required for verification and security purposes.
                cin.ignore();
                cin.getline(current_id, 20);

                cout << "Enter reservation code: ";
                cin >> current_reservation_code;

                guest_reservation[room_type == 1 ? i : room_type == 2 ? u : m] = 1;
                cout << "Your room is reserved.\n"; 
                room_number = room_type == 1 ? ++i : room_type == 2 ? ++u : ++m;
                cout << "Your room number is: " << room_number << endl;
                break;
            }

            case 2:
                room_number = 1;
                for (int k = 0; k < total_number_room; ++k) {
                    cout << "Room number " << room_number++ << " is " << (guest_reservation[k] ? "reserved" : "available") << endl;
                }
                break;

            case 3: {
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
                        cout << "Reservation Code: " << reservation_code[k] << "\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "No guest found with the name: " << name << "\n";
                }
                found = false;
                break;
            }

            case 4: {
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
                        cout << "Reservation Code: " << reservation_code[k] << "\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "No such reservation code found\n";
                }
                found = false;
                break;
            }

            default:
                break;
        }
    }

    // Free dynamically allocated memory
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
