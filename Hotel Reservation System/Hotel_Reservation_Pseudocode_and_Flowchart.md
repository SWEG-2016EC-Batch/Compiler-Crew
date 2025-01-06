# Hotel Reservation System Problem Analysis and Algorihtim
## Problem Analysis


### Input
This class encompasses all the data that the user needs to provide to the system for processing.

- **Guest Information:**
  - **Name**: A string representing the name of the guest.
  - **Gender**: A character ('M' or 'F') to denote the guest's gender.
  - **Age**: An integer representing the guest's age (must be at least 18).
  - **ID/Passport Number**: A string for identification purposes.
  - **Reservation Code**: An integer code generated during reservation for future reference.

- **Room Reservation:**
  - **Room Type**: An integer choice representing the type of room (1: Ocean View Suite, 2: Poolside Villa, 3: Garden View Room).
  - **Room Number**: The number of the room being reserved (automatically assigned based on availability).

- **Search Options:**
  - **Search Criteria**: Either the guest's name or reservation code for locating reservations.

### Output
This class includes all the information that the system provides back to the user.

- **Reservation Confirmation:**
  - **Room Number**: The assigned room number for the reservation.
  - **Reservation Details**: A summary of the guest's information including name, gender, age, ID, and reservation code.

- **Room Status:**
  - **Availability Report**: A list displaying the status (reserved or available) of each room type, formatted for easy understanding.

- **Help Responses:**
  - **Guest Search Results**: Information on the guest found based on the search criteria, or appropriate error messages if no match is found.
  - **About Services**: Information regarding the services offered by the hotel.
  - **Contact Information**: Details for reaching hotel management or customer support.

### Operation
This class defines the functionalities and processes that the system performs.

- **Room Reservation Process:**
  - Validate user input for guest information, ensuring that the name is valid and the age meets the minimum requirement.
  - Check room availability based on the selected room type and assign the room to the guest if available.
  - Store guest information in dynamic memory structures.

- **Room Status Display:**
  - Generate and display the current status of all rooms, indicating which are reserved and which are available.

- **Guest Management:**
  - Implement search functionality for locating guest reservations by name or reservation code.
  - Allow editing of guest information, including updating reservation details or changing room types.
  - Implement the cancellation of reservations, freeing up the room for future bookings.

- **User Interaction:**
  - Provide a user-friendly menu for navigating different services (reserve a room, view room status, get help).
  - Handle invalid inputs gracefully, providing feedback and prompting for re-entry.


## Flowchart
```mermaid
flowchart TD
    start([Start]) --> displayMenu[/Display Main Menu/]
    
    displayMenu --> checkOption1{Option == 1?}
    checkOption1 -->|Yes| reserveRoom[Reserve a Room]
    checkOption1 -->|No| checkOption2{Option == 2?}
    
    checkOption2 -->|Yes| viewStatus[/View Room Status/]
    checkOption2 -->|No| checkOption3{Option == 3?}
    
    checkOption3 -->|Yes| helpBooking[/Help With Booking/]
    checkOption3 -->|No| checkOption4{Option == 0?}
    
    checkOption4 -->|Yes| finish([End])
    checkOption4 -->|No| invalidOption[Invalid Option, Go Back to Menu]
    
    reserveRoom --> chooseRoomType[/Choose Room Type/]
    chooseRoomType --> roomType1{Room Type == Ocean View Suite?}
    roomType1 -->|Yes| guestInfo1[/Enter Guest Info/]
    roomType1 -->|No| roomType2{Room Type == Poolside Villa?}
    
    roomType2 -->|Yes| guestInfo2[/Enter Guest Info/]
    roomType2 -->|No| guestInfo3[/Enter Guest Info for Garden View Room/]
    
    guestInfo1 --> validateInfo1{Is Input Valid?}
    guestInfo2 --> validateInfo1
    guestInfo3 --> validateInfo1
    
    validateInfo1 -->|Yes| confirmReservation[/Room Reserved Successfully!/]
    validateInfo1 -->|No| retryInfo[Retry Entering Info]
    retryInfo --> chooseRoomType
    
    confirmReservation --> backToMenu1[Go Back to Menu]
    backToMenu1 --> displayMenu
    
    viewStatus --> showAvailability[/Display Room Availability/]
    showAvailability --> backToMenu2[Go Back to Menu]
    backToMenu2 --> displayMenu
    
    helpBooking --> helpOptions[/Display Help Options/]
    helpOptions --> option1{Help == Search Guest?}
    option1 -->|Yes| searchGuest[/Search Guest/]
    option1 -->|No| option2{Help == Edit Guest Data?}
    
    option2 -->|Yes| editGuest[/Edit Guest Data/]
    option2 -->|No| option3{Help == Cancel Reservation?}
    
    option3 -->|Yes| cancelReservation[/Cancel Reservation/]
    option3 -->|No| option4{Help == About Services?}
    
    option4 -->|Yes| aboutServices[/About Services/]
    option4 -->|No| contactUs[/Contact Us/]
    
    searchGuest --> guestFound{Guest Found?}
    guestFound -->|Yes| showGuestInfo[/Display Guest Info/] --> backToMenu3[Go Back to Menu]
    guestFound -->|No| notFound[/Guest Not Found/] --> backToMenu3
    
    editGuest --> backToMenu4[Go Back to Menu]
    cancelReservation --> backToMenu4
    aboutServices --> backToMenu4
    contactUs --> backToMenu4
    
    backToMenu3 --> displayMenu
    backToMenu4 --> displayMenu
    
    invalidOption --> displayMenu

