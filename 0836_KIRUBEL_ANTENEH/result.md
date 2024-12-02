### Problem Analysis
The purpose of this program is to calculate the result of a base number raised to a power (exponent) using the pow function from the cmath library. 

Inputs:
- x: The base number.
- y: The exponent to which the base number is raised.

Processes:
- Read the base number x from the user.
- Read the exponent y from the user.
- Calculate the result of raising x to the power of y using the formula: final_result = pow(x, y).

Outputs:
- Display the result of the calculation.

### Pseudocode
---

1. Start
2. Declare variables x, y, final_result
3. Prompt the user to enter the base number
4. Read x
5. Prompt the user to enter the exponent
6. Read y
7. Calculate final_result as pow(x, y)
8. Output the final result
9. Output a thank you message
10. End

flowchart

```mermaid
flowchart TD
    A((Start)) --> B[Declare variables: x, y, final_result]
    B --> C[/Prompt user for base x/]
    C --> D[/Input base x/]
    D --> E[/Prompt user for exponent y/]
    E --> F[/Input exponent y/]
    F --> G[Calculate result: final_result = x^y]
    G --> H[/Display final result/]
    H --> I[/Display thank you message/]
    I --> J((End))
