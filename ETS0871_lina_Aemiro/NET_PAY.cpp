#include <iostream>
using namespace std;

int main() {
    float base_salary, worked_hours, bonus_rate, overtime_rate = 0, extra_work_hours = 0, bonus = 0;
    float gross_salary, pension, tax, net_salary;
    float tax_rate = 0;

    cout << "Enter base salary: ";
    cin >> base_salary;
    cout << "Enter worked hours: ";
    cin >> worked_hours;
    cout << "Enter bonus rate: ";
    cin >> bonus_rate;

    if (worked_hours > 40) {
        extra_work_hours = worked_hours - 40;
        cout << "Enter overtime rate per hour: ";
        cin >> overtime_rate;
        bonus = extra_work_hours * overtime_rate;
    }

    gross_salary = base_salary + bonus;
    pension = base_salary * 0.07;

    if (gross_salary <= 200) tax_rate = 0;
    else if (gross_salary <= 600) tax_rate = 0.10;
    else if (gross_salary <= 1200) tax_rate = 0.15;
    else if (gross_salary <= 2000) tax_rate = 0.20;
    else if (gross_salary <= 3500) tax_rate = 0.25;
    else tax_rate = 0.30;

    tax = gross_salary * tax_rate;
    net_salary = gross_salary - pension - tax;

    cout << "Net Salary: " << net_salary << endl;

    return 0;
}
