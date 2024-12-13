### pseudo code

1. Start
2. Declare variables base_salary, worked_hours, bonus_rate, overtime_rate, extra_work_hours, bonus, gross_salary, pension, tax_rate, tax, net_salary
3. Prompt the user to enter base_salary
4. Read base_salary
5. Prompt the user to enter worked_hours
6. Read worked_hours
7. Prompt the user to enter bonus_rate
8. Read bonus_rate
9. If worked_hours > 40:
   10. Calculate extra_work_hours = worked_hours - 40
   11. Prompt the user to enter overtime_rate
   12. Read overtime_rate
   13. Calculate bonus = extra_work_hours * overtime_rate
   14. Else:
       - Set bonus = 0
15. Calculate gross_salary = base_salary + bonus
16. Calculate pension = base_salary * 0.07
17. If gross_salary <= 200:
       - Set tax_rate = 0
18. Else If gross_salary <= 600:
       - Set tax_rate = 0.10
19. Else If gross_salary <= 1200:
       - Set tax_rate = 0.15
20. Else If gross_salary <= 2000:
       - Set tax_rate = 0.20
21. Else If gross_salary <= 3500:
       - Set tax_rate = 0.25
22. Else:
       - Set tax_rate = 0.30
23. Calculate tax = gross_salary * tax_rate
24. Calculate net_salary = gross_salary - pension - tax
25. Output net_salary
26. End
