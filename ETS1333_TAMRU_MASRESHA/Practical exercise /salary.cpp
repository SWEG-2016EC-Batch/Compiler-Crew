/* Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided. The program should read the basic salary, worked hours, and bonus
rate. If the employee worked hours exceed 40 hrs., the program prompts the user to enter an over-time bonus rate/hour.*/

#include <iostream>
using namespace std;

int main() {
    double basic_salary, worked_hours, overtime_bonus_rate = 0;
    cout << "Enter basic salary: ";
    cin >> basic_salary;
    cout << "Enter worked hours: ";
    cin >> worked_hours;

    if (worked_hours > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtime_bonus_rate;
    }

    // Calculate bonus we can get
    double bonus = (worked_hours > 40) ? (worked_hours - 40) * overtime_bonus_rate : 0;
    double gross_salary = basic_salary + bonus;
    double pension = basic_salary * 0.07; // Pension is 7%

    // Decide on the value of the rax rate depending on the value of gross salary
    double tax_rate;
    if (gross_salary <= 200) tax_rate = 0;
    else if (gross_salary <= 600) tax_rate = 0.10;
    else if (gross_salary <= 1200) tax_rate = 0.15;
    else if (gross_salary <= 2000) tax_rate = 0.20;
    else if (gross_salary <= 3500) tax_rate = 0.25;
    else tax_rate = 0.30;

    // now, calculate the tax
    double tax = gross_salary * tax_rate;
    double net_salary = gross_salary - pension - tax;

    // Display the Net pay of an employee 
    cout << " The employee will get a Net Salary of: " << net_salary << endl;

    return 0;
}
