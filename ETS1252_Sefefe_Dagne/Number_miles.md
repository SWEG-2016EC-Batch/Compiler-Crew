### Problem Analysis
The purpose of this program is to calculate the total distance that an automobile can travel without refueling based on the fuel tank capacity and the fuel efficiency (miles per gallon) of the automobile.

Inputs:
- tank_Capacity: The fuel tank capacity of the automobile in gallons.
- miles_PerGallon: The number of miles the automobile can travel per gallon of fuel.

Processes:
- Read the fuel tank capacity from the user.
- Read the miles per gallon from the user.
- Calculate the total distance the automobile can travel without refueling using the formula: total_Miles = tank_Capacity * miles_PerGallon.

Outputs:
- Display the total distance the automobile can travel without refueling.

### Pseudocode
---

1. Start
2. Declare variables tank_Capacity, miles_PerGallon, total_Miles
3. Prompt the user to enter the fuel tank capacity in gallons
4. Read tank_Capacity
5. Prompt the user to enter the miles per gallon
6. Read miles_PerGallon
7. Calculate total_Miles as tank_Capacity * miles_PerGallon
8. Output the total distance the automobile can travel without refueling
9. End

    ### flowchart

 ```mermaid
flowchart TD
    A((Start)) --> B[Declare variables: tank_Capacity, miles_PerGallon, total_Miles]
    B --> C[/Prompt user for tank capacity in gallons/]
    C --> D[/Input tank capacity/]
    D --> E[/Prompt user for miles per gallon/]
    E --> F[/Input miles per gallon/]
    F --> G[Calculate total miles: total_Miles = tank_Capacity * miles_PerGallon]
    G --> H[/Display total miles/]
    H --> I((End))



