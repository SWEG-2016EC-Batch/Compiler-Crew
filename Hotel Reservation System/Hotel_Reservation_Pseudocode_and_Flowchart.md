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


flowchart TD
    A([Start]) --> B[Main Menu]
    B --> C[Reserve a Room]
    B --> D[View Room Status]
    B --> E[Help With Booking]
    B --> F[Exit Program]

    C --> G[Choose Room Type]
    G --> H[Ocean View Suite]
    G --> I[Poolside Villa]
    G --> J[Garden View Room]

    H --> K[Enter Guest Info]
    I --> K
    J --> K

    K --> L{Is Input Valid?}
    L -->|Yes| M[Reserve Room]
    L -->|No| K

    M --> B

    D --> N[Show Room Availability]
    N --> B

    E --> O[Help Options]
    O --> P[Search Guest]
    O --> Q[Edit Guest Data]
    O --> R[Cancel Reservation]
    O --> S[About Services]
    O --> T[Contact Us]

    P --> U{Guest Found?}
    U -->|Yes| V[Display Guest Info]
    U -->|No| W[Guest Not Found]
    V --> B
    W --> B

    Q --> X[Edit Guest Data]
    X --> B

    R --> Y[Cancel Reservation]
    Y --> B

    S --> Z[About Services Info]
    Z --> B

    T --> AA[Contact Information]
    AA --> B

    F --> AB([End])
