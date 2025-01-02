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

    for (int i = 0; i < total_number_room; ++i) {
        guest_name[i] = new char[20];
        guest_gender[i] = new char[20];
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
            case 1:
                int room_type;
                cout << "\nSelect Room Type:\n";
                cout << "1. Ocean View Suite (Rooms 1-60)\n";
                cout << "2. Poolside Villa (Rooms 61-110)\n";
                cout << "3. Garden View Room (Rooms 111-150)\n";
                cout << "Enter your choice: ";
                cin >> room_type;

                if (room_type < 1 || room_type > 3) {
                    cout << "Invalid choice. Please try again.\n";
                    continue;
                }

                if ((room_type == 1 && i >= 60) ||
                    (room_type == 2 && u >= 110) ||
                    (room_type == 3 && m >= total_number_room)) {
                    cout << "Selected room type is fully booked. Please choose a different type.\n";
                    continue;
                }

                cout << "Enter guest name: ";
                cin.ignore();
                cin.getline(room_type == 1 ? guest_name[i] : room_type == 2 ? guest_name[u] : guest_name[m], 20);

                cout << "Enter gender: ";
                cin.getline(room_type == 1 ? guest_gender[i] : room_type == 2 ? guest_gender[u] : guest_gender[m], 20);

                cout << "Enter age: ";
                cin >> (room_type == 1 ? guest_age[i] : room_type == 2 ? guest_age[u] : guest_age[m]);

                cout << "Enter reservation code: ";
                cin >> (room_type == 1 ? reservation_code[i] : room_type == 2 ? reservation_code[u] : reservation_code[m]);

                guest_reservation[room_type == 1 ? i : room_type == 2 ? u : m] = 1;
                cout << "Your room is reserved.\n";
                room_number = room_type == 1 ? ++i : room_type == 2 ? ++u : ++m;
                cout << "Your room number is: " << room_number << endl;
                break;

            case 2:
                room_number = 1;
                for (int k = 0; k < total_number_room; ++k) {
                    cout << "Room number " << room_number++ << " is " << (guest_reservation[k] ? "reserved" : "available") << endl;
                }
                break;

            case 3:
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

            case 4:
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

            default:
                break;
        }
    }

    // Free dynamically allocated memory
    for (int k = 0; k < total_number_room; ++k) {
        delete[] guest_name[k];
        delete[] guest_gender[k];
    }
    delete[] guest_reservation;
    delete[] guest_name;
    delete[] guest_gender;
    delete[] guest_age;
    delete[] reservation_code;

    return 0;
}
