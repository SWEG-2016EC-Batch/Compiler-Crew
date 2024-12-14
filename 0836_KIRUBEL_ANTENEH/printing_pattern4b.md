## Pseudocode for Pattern Printing Program

```pseudocode
start

declare n, temp as unsigned int

a:
display "Enter Number of Rows: "
read temp
if temp is invalid then
    clear input
    ignore input
    display "Invalid Input! Try Again."
    goto a

display "Square pattern with increasing numbers on each line"
n = temp
for i = 1 to n do
    for j = 1 to n do
        display j, " "
    display newline

display "Square pattern with increasing alphabet letter over the whole square"
n = temp
letter = 'A'
for i = 1 to n do
    for j = 1 to n + 2 do
        display letter, " "
        letter = letter + 1
        if letter > 'Z' then
            letter = 'A'
    display newline

display "Increasing Triangle that goes to the right"
n = temp
for i = 1 to n do
    for j = 1 to i do
        display j, " "
    display newline

display "Increasing Triangle that goes to the left with numbers"
n = temp
for i = 1 to n do
    for j = n down to i + 1 do
        display "  "
    for k = 1 to i do
        display k, " "
    display newline

display "Increasing triangle that goes to the right with letters"
n = temp
for i = 1 to n do
    for j = 0 to i do
        letter = 'A' + ((i * (i + 1) / 2 + j) mod 26)
        display letter, " "
    display newline

display "Square pattern with increasing letters on each line"
n = temp
for i = 1 to n do
    for j = 'a' to 'a' + n do
        if j > 'y' then
            display 'z', " "
            j = 'a'
            break
        display j, " "
    display newline

display "Hollow quadrilateral pattern with '*' symbols"
n = temp
for i = 1 to n do
    for j = 1 to n + 1 do
        if i == 1 or i == n or j == 1 or j == n + 1 then
            display "* "
        else
            display "  "
    display newline

display "Inverted half Pyramid"
n = temp
for i = n down to 1 do
    for j = 1 to i do
        display "* "
    display newline

display "Hollow Inverted half Pyramid"
n = temp
for i = n down to 1 do
    for j = 1 to i do
        if i == 1 or i == n or j == 1 or i == j then
            display "* "
        else
            display "  "
    display newline

display "Full Pyramid"
n = temp
for i = 1 to n do
    for j = 1 to n do
        if j >= n - (i - 1) and j <= n + (i - 1) then
            display "* "
        else
            display " "
    display newline

display "Inverted Full Pyramid"
n = temp
for i = 1 to n do
    for j = 1 to i do
        display " "
    for j = i to n do
        display "* "
    display newline

display "Hollow Full Pyramid"
n = temp
for i = 0 to n - 1 do
    for j = 0 to n - i - 1 do
        display " "
    for j = 0 to i do
        if j == 0 or j == i or i == n - 1 then
            display "* "
        else
            display "  "
    display newline

end
