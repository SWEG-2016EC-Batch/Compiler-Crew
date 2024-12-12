### Algorithm(pseudocode)
### 1.Start

### 2.Declare Variables

Declare double variables: test, quizzes, assignments, project, final_exam, total_mark

Declare string variable: letter_grade

### 3.Input Assessment Marks

Prompt the user to enter the mark of test

Store the input in test

Prompt the user to enter the mark of quizzes

Store the input in quizzes

Prompt the user to enter the mark of assignments

Store the input in assignments

Prompt the user to enter the mark of project

Store the input in project

Prompt the user to enter the mark of final_exam

Store the input in final_exam

### 4.Validate Input

Check if any of the inputs (test, quizzes, assignments, project, final_exam) are out of their respective valid ranges:

test should be between 0 and 15

quizzes should be between 0 and 5

assignments should be between 0 and 10

project should be between 0 and 20

final_exam should be between 0 and 50

If any input is invalid, print "Invalid input" and terminate the program

### 5.Calculate Total Mark

Compute total_mark as the sum of test, quizzes, assignments, project, final_exam

### 6.Determine Letter Grade

If total_mark is greater than or equal to 90, set letter_grade to "A+"

Else if total_mark is greater than or equal to 80, set letter_grade to "A"

Else if total_mark is greater than or equal to 75, set letter_grade to "B+"

Else if total_mark is greater than or equal to 60, set letter_grade to "B"

Else if total_mark is greater than or equal to 55, set letter_grade to "C+"

Else if total_mark is greater than or equal to 45, set letter_grade to "C"

Else if total_mark is greater than or equal to 30, set letter_grade to "D"

Else, set letter_grade to "F"

### 7.Output Results

Print the total mark formatted to 2 decimal places

Print the letter grade

### 8.End
