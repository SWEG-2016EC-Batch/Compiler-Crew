#include <iostream>


using namespace std;

int main() {
    string name;
    float bonus_rate_per_hour, base_salary;
    float pension_rate = 0.05, tax = 0.15;
    int weekly_working_hour;
    float adjusted_base_salary, gross_salary, net_salary, bonus_payment;

    cout << "This program finds Gross Salary, Net Salary and Bonus Payment\n"
         << "Given bonus rate per hour, base salary and Week Working Hours\n";
    cout << "******************************************************\n";


    cout << "Enter Name of Employee: ";
    cin >> name;
    base_salary_entry:
    cout << "Enter the Base Salary: ";
    cin >> base_salary;
    if (cin.fail() || base_salary <= 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again.\n";
        goto base_salary_entry;
    }

    bonus_rate_per_hour_entry:
    cout << "Enter Bonus Rate per hour in birr.\nIf there is no bonus rate, Enter \"0\": ";
    cin >> bonus_rate_per_hour;
    if (cin.fail() || bonus_rate_per_hour < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again.\n";
        goto bonus_rate_per_hour_entry;
    }

    weekly_working_hour_entry:
    cout << "Enter Weekly Working Hours: ";
    cin >> weekly_working_hour;
    if (cin.fail() || weekly_working_hour <= 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again.\n";
        goto weekly_working_hour_entry;
    }
    if (base_salary <=600){
        bonus_payment = bonus_rate_per_hour * weekly_working_hour;
        gross_salary = base_salary + bonus_payment;
        cout << "The Bonus Income will be: " << weekly_working_hour << " * " << bonus_rate_per_hour << " = " << bonus_payment << " Birr\n";
        cout << "The Gross Salary will be: " << base_salary << " + " << bonus_payment << " = " << gross_salary << " Birr\n";
        cout << "Finally " << name << "'s Net Salary will be: "<< gross_salary << " Birr\n";
        cout << "Exiting... Thank you";
        return 0;
    }

    adjusted_base_salary = base_salary - (base_salary * pension_rate);
    bonus_payment = bonus_rate_per_hour * weekly_working_hour;
    gross_salary = adjusted_base_salary + bonus_payment;
    net_salary = gross_salary - (gross_salary * tax);

    cout << "The amount to be paid for pension (5%) is: " << base_salary << " * " << pension_rate << " = " << base_salary * pension_rate << " Birr\n";
    cout << "By this, the Adjusted Base Salary will be: " << base_salary << " - " << base_salary * pension_rate << " = " << adjusted_base_salary << " Birr\n";
    cout << "The Bonus Income will be: " << weekly_working_hour << " * " << bonus_rate_per_hour << " = " << bonus_payment << " Birr\n";
    cout << "The amount to be cut for tax is: " << gross_salary << " * " << tax << " = " << gross_salary * tax << " Birr\n";
    cout << "The Gross Salary will be: " << adjusted_base_salary << " + " << bonus_payment << " = " << gross_salary << " Birr\n";
    cout << "Finally " << name << "'s Net Salary will be: " << gross_salary << " - " << gross_salary * tax << " = " << net_salary << " Birr\n";
    cout << "Exiting... Thank you";

    return 0;
}
