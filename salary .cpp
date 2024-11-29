#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double weeklyHours, bonusRate, baseSalary, bonusPayment, grossSalary, pension, tax, netSalary;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    bonusPayment = weeklyHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;
    pension = 0.05 * grossSalary;
    tax = 0.15 * grossSalary;
    netSalary = grossSalary - (pension + tax);

    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pension << endl;
    cout << "Tax Deduction: $" << tax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}