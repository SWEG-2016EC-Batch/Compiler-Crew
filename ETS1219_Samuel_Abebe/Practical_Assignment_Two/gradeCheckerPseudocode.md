## Pseudocode for Grade Calculation Program

```pseudocode
start

declare test, quiz, project, assignment, finalExam, totalMark as double
declare grade as char

display "enter the mark for the test (out of 100): "
a:
read test
if test < 0 or test > 100 then
    display "invalid input! try again"
    goto a

display "enter the mark for the quiz (out of 100): "
b:
read quiz
if quiz < 0 or quiz > 100 then
    display "invalid input! try again"
    goto b

display "enter the mark for the project (out of 100): "
c:
read project
if project < 0 or project > 100 then
    display "invalid input! try again"
    goto c

display "enter the mark for the assignment (out of 100): "
d:
read assignment
if assignment < 0 or assignment > 100 then
    display "invalid input! try again"
    goto d

display "enter the mark for the final exam (out of 100): "
e:
read finalExam
if finalExam < 0 or finalExam > 100 then
    display "invalid input! try again"
    goto e

totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.20) + (assignment * 0.10) + (finalExam * 0.50)

if totalMark >= 90 then
    grade = 'A+'
elseif totalMark >= 80 then
    grade = 'A'
elseif totalMark >= 75 then
    grade = 'B+'
elseif totalMark >= 60 then
    grade = 'B'
elseif totalMark >= 55 then
    grade = 'C+'
elseif totalMark >= 45 then
    grade = 'C'
elseif totalMark >= 30 then
    grade = 'D'
else
    grade = 'F'

display "total mark: ", totalMark
display "grade: ", grade

end
