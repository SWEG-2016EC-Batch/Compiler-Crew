### Algorithm(pseudocode)
### 1.Start

### 2.Declare Variables

Declare int variable: choice

### 3.Display Menu and Get User Choice

### Loop until user chooses to exit

Display menu with options

Get user input for choice

### 4.Perform Task Based on User Choice

### If choice is 1 (Reverse Number)

Initialize reversedNum to 0

Get integer input num

While num is not 0

Get last digit of num

Update reversedNum

Remove last digit from num

Print reversedNum

### If choice is 2 (Count Digits)

Initialize count to 0

Get integer input num

While num is not 0

Remove last digit from num

Increment count

Print count

### If choice is 3 (Product of Even Digits)

Initialize product to 1, hasEven to false

Get integer input num

While num is not 0

Get last digit of num

If digit is even, update product and set hasEven to true

Remove last digit from num

If hasEven is true, print product

Else, print "No even digits found"

### If choice is 4 (First and Last Digit Sum)

Get integer input num

Initialize firstDigit and lastDigit to num

Get last digit of num as lastDigit

While firstDigit has more than one digit, remove last digit

Calculate sum of firstDigit and lastDigit

Print firstDigit, lastDigit, and sum

### If choice is 5 (Swap First and Last Digit)

Get integer input num

Initialize firstDigit, lastDigit, swappedNum, and digits

Get last digit of num as lastDigit

Get first digit of num as firstDigit

Calculate number of digits in num

Swap firstDigit and lastDigit in num

Print swappedNum

### If choice is 6 (Palindrome Check)

Get integer input num

Initialize originalNum to num, reversedNum to 0

While num is not 0

Get last digit of num

Update reversedNum

Remove last digit from num

If originalNum is equal to reversedNum, print palindrome message

Else, print not palindrome message

### If choice is 7 (Digit Frequency)

Get integer input num

Initialize frequency array of size 10 with 0

While num is not 0

Get last digit of num

Increment frequency of that digit

Remove last digit from num

Print frequency of each digit

### If choice is 8 (Strong Number Check)

Get integer input num

Initialize originalNum to num, sum to 0

Define factorial function as lambda

While num is not 0

Get last digit of num

Add factorial of digit to sum

Remove last digit from num

If sum is equal to originalNum, print strong number message

Else, print not strong number message

### If choice is 9 (Perfect Number Check)

Get integer input num

Initialize sum to 0

Loop from 1 to half of num

If num is divisible by current number, add it to sum

If sum is equal to num, print perfect number message

Else, print not perfect number message

### If choice is 10 (Exit)

Print exiting message

Break loop

### If invalid choice

Print invalid choice message

### 5.End

  ### flowchart
  ```mermaid
graph TD
    A([Start]) --> B[/Select a task/]
    B --> C{Choice}
    C -- 1 --> D[/Enter an integer/]
    D --> E[Reverse the number]
    E --> F[/Display reversed number/]
    F --> B
    C -- 2 --> G[/Enter an integer/]
    G --> H[Count the digits]
    H --> I[/Display digit count/]
    I --> B
    C -- 3 --> J[/Enter an integer/]
    J --> K[Find the product of even digits]
    K --> L[/Display product of even digits/]
    L --> B
    C -- 4 --> M[/Enter an integer/]
    M --> N[Find first and last digit and their sum]
    N --> O[/Display first and last digit and their sum/]
    O --> B
    C -- 5 --> P[/Enter an integer/]
    P --> Q[Swap first and last digit]
    Q --> R[/Display swapped number/]
    R --> B
    C -- 6 --> S[/Enter an integer/]
    S --> T[Check if the number is a palindrome]
    T --> U[/Display palindrome result/]
    U --> B
    C -- 7 --> V[/Enter an integer/]
    V --> W[Find the frequency of each digit]
    W --> X[/Display digit frequency/]
    X --> B
    C -- 8 --> Y[/Enter an integer/]
    Y --> Z[Check if the number is strong]
    Z --> AA[/Display strong number result/]
    AA --> B
    C -- 9 --> BB[/Enter an integer/]
    BB --> CC[Check if the number is perfect]
    CC --> DD[/Display perfect number result/]
    DD --> B
    C -- 10 --> EE[/Exit/]
    EE --> FF([End])
    C -- Invalid choice --> GG[/Display invalid choice message/]
    GG --> B
