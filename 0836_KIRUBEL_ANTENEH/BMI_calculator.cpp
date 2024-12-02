  /* Make a program that calculates the Body Mass Index (BMI) of a person and determine whether the person is in normal weight, underweight or overweight.
  BMI is calculated as (BMI = w/h*h). Make the program to work for multiple person before terminating.*/
  #include <iostream>
using namespace std;

int main(){
    float user_weight, user_height, bmi;
    char choice = 'y';

    while (choice == 'y'){
        line9:
        cout << "Enter weight in kg: ";
        cin >> user_weight;
        if (cin.fail() || user_weight <= 0){
            cout << "Invalid input please try again!\n";
            cin.clear();
            cin.ignore();
            goto line9;
        }

        line20:
        cout << "Enter height in Meter: ";
        cin >> user_height;

        if (cin.fail() || user_height <= 0){
            cout << "Invalid input please try again!\n";
            cin.clear();
            cin.ignore();
            continue;
        }
        
        float height_squared = user_height * user_height;
        bmi = user_weight / height_squared;

        cout << "your BMi is: " << bmi << endl;
        if (bmi < 18.5){
            cout << "you are under weight! \n \n";
        }else if (bmi > 25){
            cout << "you are over weight! \n \n";
        }else{
            cout << "you have a normal weight! \n \n";
        }
        cout << "Do you want to continue?\ny for yes | other key for no: ";
        cin >> choice;
    }
    return 0;
}
