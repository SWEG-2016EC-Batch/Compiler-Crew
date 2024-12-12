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
