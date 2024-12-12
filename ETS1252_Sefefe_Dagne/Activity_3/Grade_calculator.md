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

  ### flowchart
  ```mermaid
graph TD
    A([Start]) --> B[/Enter the mark of test/]
    B --> C[/Enter the mark of quizzes/]
    C --> D[/Enter the mark of assignments/]
    D --> E[/Enter the mark of project/]
    E --> F[/Enter the mark of final exam/]
    F --> G{Are any marks invalid?}
    G -- Yes --> H[/Invalid input/]
    G -- No --> I[Calculate total mark]
    I --> J{Total mark >= 90?}
    J -- Yes --> K[letter_grade = A+]
    J -- No --> L{Total mark >= 80?}
    L -- Yes --> M[letter_grade = A]
    L -- No --> N{Total mark >= 75?}
    N -- Yes --> O[letter_grade = B+]
    N -- No --> P{Total mark >= 60?}
    P -- Yes --> Q[letter_grade = B]
    P -- No --> R{Total mark >= 55?}
    R -- Yes --> S[letter_grade = C+]
    R -- No --> T{Total mark >= 45?}
    T -- Yes --> U[letter_grade = C]
    T -- No --> V{Total mark >= 30?}
    V -- Yes --> W[letter_grade = D]
    V -- No --> X[letter_grade = F]
    K --> Y[/Display total mark and letter grade/]
    M --> Y[/Display total mark and letter grade/]
    O --> Y[/Display total mark and letter grade/]
    Q --> Y[/Display total mark and letter grade/]
    S --> Y[/Display total mark and letter grade/]
    U --> Y[/Display total mark and letter grade/]
    W --> Y[/Display total mark and letter grade/]
    X --> Y[/Display total mark and letter grade/]
    Y --> Z([End])
    H --> Z([End])
