

Problem Analysis for BMI Calculator Program
Inputs:
Weight (in kilograms) ,Height (in meters) ,Decision to proceed (yes/no) 
Outputs:
BMI Value, BMI Classification: Underweight: BMI < 18.5
Normal weight: BMI<24.9
Overweight: BMI > 24.9

Prompt to proceed or terminate Process:

Input Collection: Prompt the user to enter their weight and height. BMI Calculation: Compute BMI using the formula . Classification: Compare BMI to predefined thresholds and classify. Loop Control: Ask the user if they want to calculate BMI for another person. If yes, repeat; otherwise, exit.

pseudocode
1. Start
2. Initialize weight, height, bmi, choice
3. Repeat the following steps:
   4. Prompt user to enter weight in kilograms
   5. Read weight
   6. Prompt user to enter height in meters
   7. Read height
   8. Calculate bmi as weight / (height * height)
   9. Display bmi
   10. If bmi < 18.5:
       - Display "Category: Underweight"
   11. Else if bmi < 24.9:
       - Display "Category: Normal weight"
   12. Else:
       - Display "Category: Overweight"
   13. Prompt user to calculate BMI for another person (y/n)
   14. Read choice
15. Until choice is not 'y' or 'Y'
16. End

17. flowchart
18
![codetoflow (1)](https://github.com/user-attachments/assets/1159634f-70e6-4a3a-935d-134e6432b4ed)
