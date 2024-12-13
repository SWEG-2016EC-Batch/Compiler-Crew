## Pseudocode for Various Patterns Program

```pseudocode
start

display "square pattern with increasing numbers on each line"
for i = 1 to 5
    for j = 1 to 5
        display j, " "

display "square pattern with increasing alphabet letter over the whole square"
letter = 'A'
for i = 1 to 4
    for j = 1 to 6
        display letter, " "
        letter++

display "increasing triangle that goes to the right"
for i = 1 to 5
    for j = 1 to i
        display j, " "

display "increasing triangle that goes to the left with numbers"
for i = 1 to 5
    for j = 5 down to i+1
        display "  "
    for k = 1 to i
        display k, " "

display "increasing triangle that goes to the right with letters"
for i = 0 to 4
    for j = 'A' to 'A'+i
        display j, " "

display "square pattern with increasing numbers on each line"
for i = 1 to 5
    for j = 'a' to 'a'+4
        display j, " "

display "hollow quadrilateral pattern with '*' symbols"
for i = 1 to 7
    for j = 1 to 8
        if i == 1 or i == 7 or j == 1 or j == 8
            display "* "
        else
            display "  "

display "inverted half pyramid"
for i = 6 down to 1
    for j = 1 to i
        display "* "

display "hollow inverted half pyramid"
for i = 6 down to 1
    for j = 1 to i
        if i == 1 or i == 6 or j == 1 or i == j
            display "* "
        else
            display "  "

display "full pyramid"
n = 6
for i = 1 to n
    for j = 1 to n
        if j >= (n - (i - 1)) and j <= (n + (i - 1))
            display "* "
        else
            display " "

display "inverted full pyramid"
n2 = 6
for i = 1 to n2
    for j = 1 to i
        display " "
    for j = i to n2
        display "* "

display "hollow full pyramid"
n3 = 6
for i = 0 to n3 - 1
    for j = 0 to n3 - i - 1
        display " "
    for j = 0 to i
        if j == 0 or j == i or i == n3 - 1
            display "* "
        else
            display "  "

end
