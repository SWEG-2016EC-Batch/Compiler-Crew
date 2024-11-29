/* Make a program that calculates the Body Mass Index (BMI) of a person and determine whether the person is in normal weight, underweight or overweight.
  BMI is calculated as (BMI = w/h*h). Make the program to work for multiple person before terminating.*/
#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    char decision;

    do {
        cout << "can you Enter your weight (kg)? "<<endl;
        cin >> weight;
        cout << "can you Enter your height (m)? "<<endl;
        cin >> height;

        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18.5)
         { cout << "you are: Underweight" << endl;}
        else if (bmi < 24.9)
         { cout << "you are: Normal weight" << endl;}
        else { cout << "you are: Overweight" << endl;}

        cout << "Do you want to proceed? (y/n): ";
        cin >> decision;
        

    } while (decision == 'y' || decision == 'Y');

    return 0;
}
