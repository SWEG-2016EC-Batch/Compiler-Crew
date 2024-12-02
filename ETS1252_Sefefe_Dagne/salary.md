### Problem Analysis

Inputs:
- Name of the employee
- Weekly working hours
- Bonus rate per hour
- Base salary

Processes:
1. Read inputs (name, hours, bonus rate, salary)
2. Calculate bonus, gross salary, pension, tax, and net salary

Outputs:
- Bonus
- Gross salary
- Net salary
### pseudocode


1. Start
2. Declare variables nameofEmployee, weekly_workingHours, bonusRatePerHour, baseSalary, bonus, gross_Salary, pension, tax, netSalary
3. Set taxrate to 0.15
4. Set pension_rate to 0.05
5. Prompt the user to enter the name of the employee
6. Read nameofEmployee
7. Prompt the user to enter the weekly working hours
8. Read weekly_workingHours
9. Prompt the user to enter the bonus rate per hour
10. Read bonusRatePerHour
11. Prompt the user to enter the base salary
12. Read baseSalary
13. Calculate bonus = weekly_workingHours * bonusRatePerHour
14. Calculate gross_Salary = baseSalary + bonus
15. Calculate pension = baseSalary * pension_rate
16. Calculate tax = gross_Salary * taxrate
17. Calculate netSalary = gross_Salary - (pension + tax)
18. Output the bonus
19. Output the gross salary
20. Output the net salary
21. End

     ###  flowchart

 ```mermaid
flowchart TD
    A((Start)) --> B[/Enter employee name/]
    B --> C[/Input weekly working hours/]
    C --> D[/Input bonus rate per hour/]
    D --> E[/Input base salary/]
    E --> F[Calculate bonus: bonus = weekly_workingHours * bonusRatePerHour]
    F --> G[Calculate gross salary: gross_Salary = baseSalary + bonus]
    G --> H[Calculate pension: pension = baseSalary * pension_rate]
    H --> I[Calculate tax: tax = gross_Salary * taxrate]
    I --> J[Calculate net salary: netSalary = gross_Salary - pension -tax]
    J --> K[/Display bonus/]
    K --> L[/Display gross salary/]
    L --> M[/Display net salary/]
    M--> N((End))

    
