### pseudo code
1. Start
2. Declare variable n (dimension of the pattern)
3. Prompt the user to enter n
4. Read n

// Pattern 1: Increasing numbers in rows
5. For i = 1 to n DO
   6. For j = 1 to n DO
      7. Output j
   8. END For
   9. Output newline
10. END For

// Pattern 2: Decreasing numbers in columns
11. For i = 1 to n DO
   12. For j = n down to 1 DO
      13. Output j
   14. END For
   15. Output newline
16. END For

// Pattern 3: Alphabet sequence in rows
17. For i = 1 to n DO
   18. For j = 1 to n DO
      19. Output char('A' + j - 1)
   20. END For
   21. Output newline
22. END For

// Pattern 4: Increasing alphabet sequence in columns
23. For i = 1 to n DO
   24. For j = 1 to i DO
      25. Output char('A' + i - 1)
   26. END For
   27. Output newline
28. END For

// Pattern 5: Small alphabet sequence in rows
29. For i = 1 to n DO
   30. For j = 1 to n DO
      31. Output char('a' + i - 1)
   32. END For
   33. Output newline
34. END For

// Pattern 6: Hollow square of stars
35. For i = 1 to n DO
   36. For j = 1 to n DO
      37. IF i == 1 OR i == n OR j == 1 OR j == n THEN
         38. Output "*"
      39. ELSE
         40. Output " "
      41. END IF
   42. END For
   43. Output newline
44. END For

// Pattern 7: Inverted half pyramid of stars
45. For i = n down to 1 DO
   46. For j = 1 to i DO
      47. Output "*"
   48. END For
   49. Output newline
50. END For

// Pattern 8: Hollow inverted half pyramid of stars
51. For i = n down to 1 DO
   52. For j = 1 to i DO
      53. IF i == n OR j == 1 OR j == i THEN
         54. Output "*"
      55. ELSE
         56. Output " "
      57. END IF
   58. END For
   59. Output newline
60. END For

// Pattern 9: Full pyramid of stars
61. For i = 1 to n DO
   62. For j = 1 to (n - i) DO
      63. Output " "
   64. END For
   65. For j = 1 to (2 * i - 1) DO
      66. Output "*"
   67. END For
   68. Output newline
69. END For

// Pattern 10: Inverted full pyramid of stars
70. For i = n down to 1 DO
   71. For j = 1 to (n - i) DO
      72. Output " "
   73. END For
   74. For j = 1 to (2 * i - 1) DO
      75. Output "*"
   76. END For
   77. Output newline
78. END For

// Pattern 11: Hollow full pyramid of stars
79. For i = 1 to n DO
   80. For j = 1 to (n - i) DO
      81. Output " "
   82. END For
   83. For j = 1 to (2 * i - 1) DO
      84. IF j == 1 OR j == (2 * i - 1) OR i == n THEN
         85. Output "*"
      86. ELSE
         87. Output " "
      88. END IF
   89. END For
   90. Output newline
91. END For

// Pattern 12: Hollow inverted full pyramid of stars
92. For i = n down to 1 DO
   93. For j = 1 to (n - i) DO
      94. Output " "
   95. END For
   96. For j = 1 to (2 * i - 1) DO
      97. IF j == 1 OR j == (2 * i - 1) OR i == n THEN
         98. Output "*"
      99. ELSE
         100. Output " "
     101. END IF
   102. END For
   103. Output newline
104. END For

105. End
