### Problem Analysis

Inputs:
- weight: The user's weight in kilograms.
- height: The user's height in meters.
- decision: User's choice to continue or stop.

Processes:
1. Read the user's weight.
2. Read the user's height.
3. Calculate BMI using the formula: bmi = weight / (height * height).
4. Classify BMI into underweight, normal weight, or overweight.
5. Ask the user if they want to proceed.

Outputs:
- The user's BMI.
- The BMI classification.
- Decision to proceed or stop.

---

### Pseudocode

1. Start
2. Declare variables weight, height, bmi, decision
3. Do
   4. Prompt the user to enter weight in kilograms
   5. Read weight
   6. Prompt the user to enter height in meters
   7. Read height
   8. Calculate bmi = weight / (height * height)
   9. Output bmi
   10. If bmi < 18.5:
       - Output "Underweight"
   11. Else if bmi < 24.9:
       - Output "Normal weight"
   12. Else:
       - Output "Overweight"
   13. Prompt the user to decide if they want to proceed (y/n)
   14. Read decision
15. While decision is 'y' or 'Y'
16. End
