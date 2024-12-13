### pseudo code

1. Start
2. Declare variables: num, reverse_num, digit_count, product_even, sum_first_last, first_digit, last_digit, temp, sum_factorials, sum_divisors, choice
3. Display menu options:
   1. Reverse the number
   2. Count the number of digits
   3. Product of even digits
   4. Sum of first and last digit
   5. Swap first and last digit
   6. Check if palindrome
   7. Digit frequency
   8. Check if Strong number
   9. Check if Perfect number
   0. Exit
4. Repeat steps 5 to 79 until choice is 0

   5. Prompt the user to enter choice
   6. Read choice
   7. IF choice == 0 THEN
      8. Output "Program terminated."
      9. EXIT the program
   10. END IF
   
   11. Prompt the user to enter num
   12. Read num

   13. IF choice == 1 THEN
      14. Set reverse_num = 0 and temp = num
      15. WHILE temp > 0 DO
         16. Extract digit = temp % 10
         17. Set reverse_num = reverse_num * 10 + digit
         18. Set temp = temp // 10
      19. END WHILE
      20. Output "Reversed number: reverse_num"
   21. END IF

   22. IF choice == 2 THEN
      23. Set digit_count = 0 and temp = num
      24. WHILE temp > 0 DO
         25. Increment digit_count by 1
         26. Set temp = temp // 10
      27. END WHILE
      28. Output "Number of digits: digit_count"
   29. END IF

   30. IF choice == 3 THEN
      31. Set product_even = 1 and temp = num
      32. WHILE temp > 0 DO
         33. Extract digit = temp % 10
         34. IF digit is even THEN
            35. Set product_even = product_even * digit
         36. END IF
         37. Set temp = temp // 10
      38. END WHILE
      39. IF product_even > 1 THEN
         40. Output "Product of even digits: product_even"
      41. ELSE
         42. Output "No even digits"
      43. END IF
   44. END IF

   45. IF choice == 4 THEN
      46. Set last_digit = num % 10
      47. Set first_digit = num
      48. WHILE first_digit >= 10 DO
         49. Set first_digit = first_digit // 10
      50. END WHILE
      51. Set sum_first_last = first_digit + last_digit
      52. Output "Sum of first and last digits: sum_first_last"
   53. END IF

   54. IF choice == 5 THEN
      55. Set last_digit = num % 10
      56. Set divisor = 1
      57. WHILE num >= 10 DO
         58. Set num = num // 10
         59. Set divisor = divisor * 10
      60. END WHILE
      61. Set first_digit = num
      62. Set swapped = last_digit * divisor + (num % divisor - last_digit) + first_digit
      63. Output "Number after swapping: swapped"
   64. END IF

   65. IF choice == 6 THEN
      66. Set reverse_num = 0 and temp = num
      67. WHILE temp > 0 DO
         68. Extract digit = temp % 10
         69. Set reverse_num = reverse_num * 10 + digit
         70. Set temp = temp // 10
      71. END WHILE
      72. IF reverse_num == num THEN
         73. Output "Palindrome"
      74. ELSE
         75. Output "Not a Palindrome"
      76. END IF
   77. END IF

   78. IF choice == 7 THEN
      79. Set temp = num
      80. Initialize an array freq[10] with zeros
      81. WHILE temp > 0 DO
         82. Extract digit = temp % 10
         83. Increment freq[digit] by 1
         84. Set temp = temp // 10
      85. END WHILE
      86. Output "Digit frequencies:"
      87. FOR i = 0 TO 9 DO
         88. IF freq[i] > 0 THEN
            89. Output "digit: freq[i]"
         90. END IF
      91. END FOR
   92. END IF

   93. IF choice == 8 THEN
      94. Set sum_factorials = 0 and temp = num
      95. WHILE temp > 0 DO
         96. Extract digit = temp % 10
         97. Calculate factorial of digit and add to sum_factorials
         98. Set temp = temp // 10
      99. END WHILE
      100. IF sum_factorials == num THEN
         101. Output "Strong number"
      102. ELSE
         103. Output "Not a Strong number"
      104. END IF
   105. END IF

   106. IF choice == 9 THEN
      107. Set sum_divisors = 0
      108. FOR i = 1 TO num / 2 DO
         109. IF num % i == 0 THEN
            110. Set sum_divisors = sum_divisors + i
         111. END IF
      112. END FOR
      113. IF sum_divisors == num THEN
         114. Output "Perfect number"
      115. ELSE
         116. Output "Not a Perfect number"
      117. END IF
   118. END IF

   119. Go back to step 5 for another menu selection
