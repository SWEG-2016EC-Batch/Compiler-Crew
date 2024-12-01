 /* Design an algorithm and write a program to read an employee name , weekly working hours, bonus rate per hour and base salary
and find the employees gross salary , net salary and bonus payment . (Hint: pension rate_5%,tax_15%).*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nameofEmployee;
    double weekly_workingHours, bonusRatePerHour, baseSalary, bonus, gross_Salary, pension, tax, netSalary;
    double taxrate=0.15;
    double pension_rate=0.05;

    // please Enter the name of the employee for whom you want to calculate the salary
    cout << "what is the name of the employee?"<<endl;
    getline(cin, nameofEmployee);

    // please input all the required informations
    cout << "Enter weekly working hours: ";
    cin >> weekly_workingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    // now calculate the bonus that the employee will get
    bonus = weekly_workingHours * bonusRatePerHour;

    // find the gross salary
    gross_Salary = baseSalary + bonus;

    // Calculate pension and the tax that the employee will pay
    pension = baseSalary * 0.05;
    tax = gross_Salary * 0.15;

    // Calculate net salary
    netSalary = gross_Salary -(pension +tax);

    // now display the final result that the employee will have
    cout <<nameofEmployee<<" will have a bonus of " << bonus <<" dollar"<<endl;
    cout << nameofEmployee<< " will have a gross salary of " << gross_Salary <<" dollar"<< endl;
    cout << "And he finally recieves a net salary of " << netSalary <<" dollar "<< endl;

    return 0;
}
