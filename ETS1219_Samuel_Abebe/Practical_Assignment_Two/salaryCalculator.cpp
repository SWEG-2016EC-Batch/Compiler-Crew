#include <iostream>
using namespace std;

int main() {
    double basicSalary, workedHours, bonusRate, overtimeBonusRate = 0;

    a:
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    if (cin.fail() || basicSalary < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again\n";
        goto a;
    }

    b:
    cout << "Enter worked hours: ";
    cin >> workedHours;
    if (cin.fail() || workedHours < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again\n";
        goto b;
    }

    c:
    cout << "Enter bonus rate: ";
    cin >> bonusRate;
    if (cin.fail() || bonusRate < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again\n";
        goto c;
    }

    double bonus = 0;
    if (workedHours > 40) {
    d:
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;
        if (cin.fail() || overtimeBonusRate < 0) {
            cin.clear();
            cin.ignore();
            cout << "Invalid Input! Try Again\n";
            goto d;
        }
        bonus = (workedHours - 40) * overtimeBonusRate;
    } else {
        bonus = workedHours * bonusRate;
    }

    double grossSalary = basicSalary + bonus;
    double pension = basicSalary * 0.07;

    double tax = 0;
    if (grossSalary > 3500) {
        tax = 665 + (grossSalary - 3500) * 0.30;
    } else if (grossSalary > 2000) {
        tax = 290 + (grossSalary - 2000) * 0.25;
    } else if (grossSalary > 1200) {
        tax = 130 + (grossSalary - 1200) * 0.20;
    } else if (grossSalary > 600) {
        tax = 40 + (grossSalary - 600) * 0.15;
    } else if (grossSalary > 200) {
        tax = (grossSalary - 200) * 0.10;
    } else {
        tax = 0;
    }

    double netPay = grossSalary - pension - tax;

    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Pension: " << pension << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}
