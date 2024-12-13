
## Pseudocode for Salary Calculation Program

```pseudocode
start

declare basicSalary, workedHours, bonusRate, overtimeBonusRate, bonus, grossSalary, pension, tax, netPay as double

a:
display "enter basic salary: "
read basicSalary
if basicSalary < 0 then
    display "invalid input! try again"
    goto a

b:
display "enter worked hours: "
read workedHours
if workedHours < 0 then
    display "invalid input! try again"
    goto b

c:
display "enter bonus rate: "
read bonusRate
if bonusRate < 0 then
    display "invalid input! try again"
    goto c

if workedHours > 40 then
d:
    display "enter overtime bonus rate per hour: "
    read overtimeBonusRate
    if overtimeBonusRate < 0 then
        display "invalid input! try again"
        goto d
    bonus = (workedHours - 40) * overtimeBonusRate
else
    bonus = workedHours * bonusRate

grossSalary = basicSalary + bonus
pension = basicSalary * 0.07

if grossSalary > 3500 then
    tax = 665 + (grossSalary - 3500) * 0.30
elseif grossSalary > 2000 then
    tax = 290 + (grossSalary - 2000) * 0.25
elseif grossSalary > 1200 then
    tax = 130 + (grossSalary - 1200) * 0.20
elseif grossSalary > 600 then
    tax = 40 + (grossSalary - 600) * 0.15
elseif grossSalary > 200 then
    tax = (grossSalary - 200) * 0.10
else
    tax = 0

netPay = grossSalary - pension - tax

display "gross salary: ", grossSalary
display "pension: ", pension
display "tax: ", tax
display "net pay: ", netPay

end
