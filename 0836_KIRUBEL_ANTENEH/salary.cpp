#include <iostream>
using namespace std;

int main(){
    string name;
    float weeklyHours, bonusRate, baseSalary, grossSalary, bonusPayment, netSalary, pensionAmount, taxAmount;
    const float pension = 0.05, tax = 0.15;

    cout << "Enter employee first name: ";
    cin >> name;

    line11:
    cout << "Enter the base salary: ";
    cin >> baseSalary;
    if (cin.fail() || baseSalary <= 0) {
        cout << "Invalid input, Try again!\n";
        cin.clear();
        cin.ignore();
        goto line11;
    }

    line21:
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    if (cin.fail() || weeklyHours < 0) {
        cout << "Invalid input, Try again!\n";
        cin.clear();
        cin.ignore();
        goto line21;
    }

    line31:
    cout << "Enter bonus rate (in percentage): ";
    cin >> bonusRate;
    if (cin.fail() || bonusRate < 0 || bonusRate > 100) {
        cout<<"Invalid input, Try again!\n";
        cin.clear();
        cin.ignore();
        goto line31;
    }

    bonusPayment = weeklyHours * (bonusRate / 100) * baseSalary;

    grossSalary = baseSalary + bonusPayment;

    pensionAmount = baseSalary * pension;
    taxAmount = grossSalary * tax;

    netSalary = grossSalary - (pensionAmount + taxAmount);

     cout << "Employee Name: " << name << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pensionAmount << endl;
    cout << "Tax Deduction: $" << taxAmount << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
