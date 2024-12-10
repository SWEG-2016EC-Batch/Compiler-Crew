# Algorithm for Calculating Net Pay

## Steps:

1. **Start**
2. **Initialize Variables**
   - `basicSalary`
   - `workedHours`
   - `bonusRate`
   - `overtimeBonusRate` (set to 0 initially)
   - `bonus`
   - `grossSalary`
   - `pension`
   - `tax`
   - `netPay`
   
3. **Input Validation for Basic Salary**
   - Prompt the user to enter `basicSalary`
   - If input is invalid (non-numeric or negative), clear the input stream, display an error message, and prompt again

4. **Input Validation for Worked Hours**
   - Prompt the user to enter `workedHours`
   - If input is invalid (non-numeric or negative), clear the input stream, display an error message, and prompt again

5. **Input Validation for Bonus Rate**
   - Prompt the user to enter `bonusRate`
   - If input is invalid (non-numeric or negative), clear the input stream, display an error message, and prompt again

6. **Calculate Bonus**
   - If `workedHours` > 40:
     - Prompt the user to enter `overtimeBonusRate`
     - If input is invalid (non-numeric or negative), clear the input stream, display an error message, and prompt again
     - Calculate `bonus` as `(workedHours - 40) * overtimeBonusRate`
   - Else:
     - Calculate `bonus` as `workedHours * bonusRate`

7. **Calculate Gross Salary**
   - `grossSalary = basicSalary + bonus`

8. **Calculate Pension**
   - `pension = basicSalary * 0.07`

9. **Calculate Tax**
   - Initialize `tax` to 0
   - If `grossSalary > 3500`, calculate `tax = 665 + (grossSalary - 3500) * 0.30`
   - Else if `grossSalary > 2000`, calculate `tax = 290 + (grossSalary - 2000) * 0.25`
   - Else if `grossSalary > 1200`, calculate `tax = 130 + (grossSalary - 1200) * 0.20`
   - Else if `grossSalary > 600`, calculate `tax = 40 + (grossSalary - 600) * 0.15`
   - Else if `grossSalary > 200`, calculate `tax = (grossSalary - 200) * 0.10`

10. **Calculate Net Pay**
    - `netPay = grossSalary - pension - tax`

11. **Display Results**
    - Output `grossSalary`
    - Output `pension`
    - Output `tax`
    - Output `netPay`

12. **End**

# Flowchart
```mermaid
graph TD
    A[Start] --> B[Initialize Variables]
    B --> C{Input Basic Salary}
    C -->|Valid| D[Input Worked Hours]
    C -->|Invalid| C1[Display Error, Retry]
    C1 --> C
    D --> E{Input Worked Hours}
    E -->|Valid| F[Input Bonus Rate]
    E -->|Invalid| E1[Display Error, Retry]
    E1 --> E
    F --> G{Input Bonus Rate}
    G -->|Valid| H{Worked Hours > 40}
    G -->|Invalid| F1[Display Error, Retry]
    F1 --> F
    H -->|Yes| I{Input Overtime Bonus Rate}
    I -->|Valid| J[Calculate Bonus = (Worked Hours - 40) * Overtime Bonus Rate]
    I -->|Invalid| I1[Display Error, Retry]
    I1 --> I
    H -->|No| K[Calculate Bonus = Worked Hours * Bonus Rate]
    J --> L[Calculate Gross Salary = Basic Salary + Bonus]
    K --> L
    L --> M[Calculate Pension = Basic Salary * 0.07]
    M --> N{Gross Salary > 3500}
    N -->|Yes| O[Calculate Tax = 665 + (Gross Salary - 3500) * 0.30]
    N -->|No| P{Gross Salary > 2000}
    P -->|Yes| Q[Calculate Tax = 290 + (Gross Salary - 2000) * 0.25]
    P -->|No| R{Gross Salary > 1200}
    R -->|Yes| S[Calculate Tax = 130 + (Gross Salary - 1200) * 0.20]
    R -->|No| T{Gross Salary > 600}
    T -->|Yes| U[Calculate Tax = 40 + (Gross Salary - 600) * 0.15]
    T -->|No| V{Gross Salary > 200}
    V -->|Yes| W[Calculate Tax = (Gross Salary - 200) * 0.10]
    V -->|No| X[Calculate Tax = 0]
    O --> Y[Calculate Net Pay = Gross Salary - Pension - Tax]
    Q --> Y
    S --> Y
    U --> Y
    W --> Y
    X --> Y
    Y --> Z[Display Gross Salary, Pension, Tax, Net Pay]
    Z --> A1[End]

