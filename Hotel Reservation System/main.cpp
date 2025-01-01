#include <iostream>
#include <cstring>
#include<limits>

using namespace std;


int main()
{
    int const total_number_room=150;

    int guest_reservation[150]={0};//array used to store reservation if 0 avaliable if 1 the room is reserved
     char guest_information[150][2][20];//string used to store guest information in char
     int guest_informaion2[150][2];//arayy used to store guest information in int
    int choice,i=0,j=0,u=60,m=110;//i,j,u,mare counting variables
  int room_number=1;
  bool found=false;//used two compare variable
    while(true){
                  cout << "               WELCOME TO HOTEL" << endl;
    cout << "                  RESERVATION PORTAL" << endl;
    a:
 cout <<"which service do you want "<<endl;
  cout << "1. Reserve a Room\n";
    cout << "2. View Room Status\n";
    cout << "3. Search Guest by Name\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (cin. fail() ||choice<1 || choice > 4){
        cout <<"please enter number 1-4"<<endl;
        cin.clear();
        cin.ignore();
        goto a;
    }
    if (choice==4){
        break;
    }

switch(choice){
    case 1:
    b:
    cout << "\nSelect Room Type:\n";
    cout << "1. Ocean View Suite (Rooms 1-60)\n";
    cout << "2. Poolside Villa (Rooms 61-110)\n";
    cout << "3. Garden View Room (Rooms 111-150)\n";
    cout << "Enter your choice: ";
    cin >> choice;
   if (choice < 1 || choice > 3) {
        cout << "Invalid choice. Please try again.\n";
        goto b;
   }
   if (choice==1 ){
bool availableRoomFound = false;
for (int k = 0; k < 60; k++) {// Check all Ocean View rooms (1-60)
       
    if (guest_reservation[k] == 0) {  // Room is available
        availableRoomFound = true;
        break;  // Exit loop when an available room is found
    }
}
string room_category = "Ocean View Suite";
if (!availableRoomFound) {
    cout << "Ocean View rooms are all reserved. Please choose another room type." << endl;
    goto b;
}

   cout << "Enter guest name: "<<endl;
   cin.ignore();
  cin.getline(guest_information[i][j], 20);
    cout << "Enter gender: "<<endl;
    cin.getline(guest_information[i][j+1], 20);
    
  do {
    cout << "Enter age (must be a positive number): ";
    cin >> guest_informaion2[i][j];
    if (cin.fail() || guest_informaion2[i][j] <= 0) {
        cout << "Invalid input. Please enter a valid positive age.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
} while (guest_informaion2[i][j] <= 0);

do {
    cout << "Enter reservation code (must be a positive number): ";
    cin >> guest_informaion2[i][j + 1];
    if (cin.fail() || guest_informaion2[i][j + 1] <= 0) {
        cout << "Invalid input. Please enter a valid positive reservation code.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
} while (guest_informaion2[i][j + 1] <= 0);


    guest_reservation[i]=1;
    cout<<"your room is reserved"<<endl;
    room_number=i+1;
cout <<"your rooom number is :"<<room_number<< " (" << room_category << ")" << endl;





   }
   if (choice==2){

      if(u>110){
    cout<<"please reserve other type of room poolside villa rooms are all reserved "<<endl;
    goto b;
 }
   cout << "Enter guest name: ";
    
     cin.ignore();
  cin.getline(guest_information[u][j], 20);
    cout << "Enter gender: "<<endl;
    cin>>guest_information[u][j+1];
    cout << "Enter age: "<<endl;
     cin>>guest_informaion2[u][j];
cout << "Enter reservation code: "<<endl;
    cin>>guest_informaion2[u][j+1];

    guest_reservation[u]=1;
    cout<<"your room is reserved"<<endl;
    room_number=u+1;

cout <<"your rooom number is :"<<u+1<<endl;
u++;

   }

    if (choice==3){

        if(m>150){
    cout<<"please reserve other type of room garden view  rooms are all reserved "<<endl;
    goto b;
 }
   cout << "Enter guest name: ";
    
     cin.ignore();
  cin.getline(guest_information[m][j], 20);
    cout << "Enter gender: "<<endl;
    cin>>guest_information[m][j+1];
    cout << "Enter age: "<<endl;
     cin>>guest_informaion2[m][j];
cout << "Enter reservation code: "<<endl;
    cin>>guest_informaion2[m][j+1];

    guest_reservation[m]=1;
    cout<<"your room is reserved"<<endl;
     room_number=m+1;
cout <<"your rooom number is :"<<m+1<<endl;
m++;


   }

    break;




    case 2:
        room_number=1;
    for(i=0;room_number<=total_number_room; i++){
        if (guest_reservation[i]==0){
            cout <<"room_number"<<room_number<<"available"<<endl;

        }
        if (guest_reservation[i]==1){
            cout <<"room_number"<<room_number<<"reserved"<<endl;

        }
        room_number++;
    }
break;

    case 3:
    char name[20];//string used two store name the user enter
    cout <<"enter guest name:"<<endl;
    cin.ignore();
    cin.getline(name,20);

        for (i=0;i<=total_number_room;i++){

            if (strcmp(guest_information[i][0], name) == 0) {
            cout << "\nGuest Found:\n";
            cout << "Room Number: " << room_number << "\n";
            cout << "Name: " << guest_information[i][0] << "\n";
            cout << "Gender: " << guest_information[i][1] << "\n";
            cout << "Age: " << guest_informaion2[i][0] << "\n";
            cout << "Reservation Code: " << guest_informaion2[i][1]<< "\n";
            found = true;
            break;
        }

    }
    if (!found) {
        cout << "No guest found with the name: " << name << "\n";
    }

break;

    default:
    break;
    }

}
return 0;
}
