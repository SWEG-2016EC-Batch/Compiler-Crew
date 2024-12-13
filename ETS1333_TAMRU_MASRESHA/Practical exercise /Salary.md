 ### Algorithm(pseudocode)

### BEGIN

    PROMPT "Enter basic salary: "
    READ basic_salary
    
    PROMPT "Enter worked hours: "
    READ worked_hours
    
    IF worked_hours > 40 THEN
        PROMPT "Enter overtime bonus rate per hour: "
        READ overtime_bonus_rate
    ELSE
        SET overtime_bonus_rate TO 0
    ENDIF
    
    SET bonus TO (worked_hours - 40) * overtime_bonus_rate IF worked_hours > 40 ELSE 0
    SET gross_salary TO basic_salary + bonus
    
    SET pension TO basic_salary * 0.07
    
    IF gross_salary <= 200 THEN
        SET tax_rate TO 0
    ELSE IF gross_salary <= 600 THEN
        SET tax_rate TO 0.10
    ELSE IF gross_salary <= 1200 THEN
        SET tax_rate TO 0.15
    ELSE IF gross_salary <= 2000 THEN
        SET tax_rate TO 0.20
    ELSE IF gross_salary <= 3500 THEN
        SET tax_rate TO 0.25
    ELSE
        SET tax_rate TO 0.30
    ENDIF
    
    SET tax TO gross_salary * tax_rate
    SET net_salary TO gross_salary - pension - tax
    
    PRINT "The employee will get a Net Salary of: ", net_salary
END

   ###  flowchart
   ```mermaid
graph TD
    A([Start]) --> B[/Enter basic salary/]
    B --> C[/Enter worked hours/]
    C --> D{Worked hours > 40?}
    D -- Yes --> E[/Enter overtime bonus rate per hour/]
    D -- No --> F[Calculate bonus]
    E --> F[Calculate bonus]
    F --> G[Calculate gross salary]
    G --> H[Calculate pension 7% of basic salary]
    H --> I{Gross salary <= 200?}
    I -- Yes --> J[Tax rate = 0]
    I -- No --> K{Gross salary <= 600?}
    K -- Yes --> L[Tax rate = 0.10]
    K -- No --> M{Gross salary <= 1200?}
    M -- Yes --> N[Tax rate = 0.15]
    M -- No --> O{Gross salary <= 2000?}
    O -- Yes --> P[Tax rate = 0.20]
    O -- No --> Q{Gross salary <= 3500?}
    Q -- Yes --> R[Tax rate = 0.25]
    Q -- No --> S[Tax rate = 0.30]
    J --> T[Calculate tax]
    L --> T[Calculate tax]
    N --> T[Calculate tax]
    P --> T[Calculate tax]
    R --> T[Calculate tax]
    S --> T[Calculate tax]
    T --> U[Calculate net salary]
    U --> V[/Display net salary/]
    V --> W([End])
