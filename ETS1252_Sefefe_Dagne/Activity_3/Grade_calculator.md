### Algorithm(pseudocode)
### 1.Declare Variables

Declare double variables: test, quizzes, assignments, project, final_exam, total_mark

Declare string variable: letter_grade

### 2.Input Assessment Marks

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

### 3.Validate Input

Check if any of the inputs (test, quizzes, assignments, project, final_exam) are out of their respective valid ranges

If any input is invalid, print "Invalid input" and exit the program

Check if the sum of test, quizzes, assignments, project, final_exam is not equal to 100

If the sum is not 100, print "The sum of all marks should be 100" and exit the program

### 4.Calculate Total Mark

Compute total_mark as the sum of test, quizzes, assignments, project, final_exam

### 5.Determine Letter Grade

If total_mark is greater than or equal to 90, set letter_grade to "A+"

Else if total_mark is greater than or equal to 80, set letter_grade to "A"

Else if total_mark is greater than or equal to 75, set letter_grade to "B+"

Else if total_mark is greater than or equal to 60, set letter_grade to "B"

Else if total_mark is greater than or equal to 55, set letter_grade to "C+"

Else if total_mark is greater than or equal to 45, set letter_grade to "C"

Else if total_mark is greater than or equal to 30, set letter_grade to "D"

Else, set letter_grade to "F"

### 6.Output Results

Print the total mark with two decimal places

Print the letter grade
