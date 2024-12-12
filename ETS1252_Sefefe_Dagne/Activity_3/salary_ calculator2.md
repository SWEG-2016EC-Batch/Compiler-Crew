### Algorithm(pseudocode)

BEGIN

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
