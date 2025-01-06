
```mermaid
flowchart TD
    A([Start]) --> B{Main Menu}
    B -->|1. Reserve a Room| C[Select Room Type]
    B -->|2. View Room Status| D[Display Room Status]
    B -->|3. Get Help With Booking| E[Help Menu]
    B -->|4. Exit| F([Exit Program])

    C --> G{Choose Room Type}
    G -->|1. Ocean View Suite| H[Enter Guest Info]
    G -->|2. Poolside Villa| I[Enter Guest Info]
    G -->|3. Garden View Room| J[Enter Guest Info]

    H --> K{Input Validation}
    I --> K
    J --> K

    K -->|Valid| L[Reserve Room]
    K -->|Invalid| C

    L --> B

    D --> M[Show Room Availability]
    M --> B

    E --> N{Help Options}
    N -->|1. Search Guest| O[Search Menu]
    N -->|2. Edit Guest Data| P[Edit Guest]
    N -->|3. Cancel Reservation| Q[Cancel Reservation]
    N -->|4. About Our Services| R[Show Services]
    N -->|5. Contact Us| S[Show Contact Info]

    O --> T{Search Options}
    T -->|1. By Name| U[Search By Name]
    T -->|2. By Reservation Code| V[Search By Code]

    U --> B
    V --> B
    P --> B
    Q --> B
    R --> B
    S --> B

    F --> Z([End])
