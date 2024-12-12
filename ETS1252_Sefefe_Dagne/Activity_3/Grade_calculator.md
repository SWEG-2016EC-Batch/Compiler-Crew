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
    G -- No --> I{Do the total marks equal 100?}
    I -- No --> J[/The sum of all marks should be 100/]
    I -- Yes --> K[Calculate total mark]
    K --> L{Total mark >= 90?}
    L -- Yes --> M[/letter_grade = "A+"/]
    L -- No --> N{Total mark >= 80?}
    N -- Yes --> O[/letter_grade = "A"/]
    N -- No --> P{Total mark >= 75?}
    P -- Yes --> Q[/letter_grade = "B+"/]
    P -- No --> R{Total mark >= 60?}
    R -- Yes --> S[/letter_grade = "B"/]
    R -- No --> T{Total mark >= 55?}
    T -- Yes --> U[/letter_grade = "C+"/]
    T -- No --> V{Total mark >= 45?}
    V -- Yes --> W[/letter_grade = "C"/]
    V -- No --> X{Total mark >= 30?}
    X -- Yes --> Y[/letter_grade = "D"/]
    X -- No --> Z[/letter_grade = "F"/]
    M --> AA[Display total mark and letter grade]
    O --> AA[Display total mark and letter grade]
    Q --> AA[Display total mark and letter grade]
    S --> AA[Display total mark and letter grade]
    U --> AA[Display total mark and letter grade]
    W --> AA[Display total mark and letter grade]
    Y --> AA[Display total mark and letter grade]
    Z --> AA[/Display total mark and letter grade/]
    AA --> AB([End])
    H --> AB([End])
    J --> AB([End])
