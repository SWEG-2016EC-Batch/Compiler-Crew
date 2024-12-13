 ## Pseudocode for Number Operations Program

```pseudocode
start

declare num, choice, temp, digit, rev as integer
digit = 0
rev = 0

while true
    number_entry:
    display "enter a number: "
    read num
    if num < 0 then
        display "invalid input! try again"
        goto number_entry
    temp = num

    menu:
    display "\nmenu:\n"
    display "1. reverse of the number\n"
    display "2. number of digits\n"
    display "3. product of even digits\n"
    display "4. first and last digit sum\n"
    display "5. swap first and last digit\n"
    display "6. check if palindrome\n"
    display "7. frequency of each digit\n"
    display "8. check if armstrong\n"
    display "9. check if strong\n"
    display "10. check if perfect\n"
    display "11. exit\n"
    display "enter your choice: "
    read choice
    if choice < 1 or choice > 11 then
        display "invalid input! try again"
        goto menu

    switch choice
        case 1: // Reverse number
            reversed = 0
            while temp > 0
                digit = temp % 10
                reversed = reversed * 10 + digit
                temp /= 10
            display "reverse of the number: ", reversed
            break

        case 2: // Number of digits
            count = 0
            while temp > 0
                count++
                temp /= 10
            display "number of digits: ", count
            break

        case 3: // Product of even digits
            product = 1
            hasEven = false
            while temp > 0
                digit = temp % 10
                if digit % 2 == 0
                    product *= digit
                    hasEven = true
                temp /= 10
            display "product of even digits: ", (hasEven ? product : 0)
            break

        case 4: // First and last digit sum
            lastDigit = num % 10
            while temp >= 10
                temp /= 10
            firstDigit = temp
            display "first digit: ", firstDigit, ", last digit: ", lastDigit, ", sum: ", firstDigit + lastDigit
            break

        case 5: // Swap first and last digit
            numStr = to_string(num)
            swap(numStr[0], numStr[numStr.length() - 1])
            display "number with swapped first and last digit: ", stoi(numStr)
            break

        case 6: // Palindrome Checker
            reversed = 0
            original = num
            while temp > 0
                reversed = reversed * 10 + temp % 10
                temp /= 10
            display "is palindrome: ", (original == reversed ? "yes" : "no")
            break

        case 7: // Frequency of each digit
            freq[10] = {0}
            while temp > 0
                freq[temp % 10]++
                temp /= 10
            display "digit\tfrequency\n"
            for i = 0 to 9
                if freq[i] > 0
                    display i, "\t", freq[i]
            break

        case 8: // Armstrong Checker
            sum = 0
            original = num
            while temp > 0
                digit = temp % 10
                sum += pow(digit, 3)
                temp /= 10
            display "is armstrong: ", (sum == original ? "yes" : "no")
            break

        case 9: // Strong Checker
            sum = 0
            original = num
            while temp > 0
                digit = temp % 10
                fact = 1
                for i = 1 to digit
                    fact *= i
                sum += fact
                temp /= 10
            display "is strong: ", (sum == original ? "yes" : "no")
            break

        case 10: // Perfect Checker
            sum = 0
            for i = 1 to num - 1
                if num % i == 0
                    sum += i
            display "is perfect: ", (sum == num ? "yes" : "no")
            break

        case 11:
            display "exiting..."
            end

        default:
            display "invalid choice. please try again."
