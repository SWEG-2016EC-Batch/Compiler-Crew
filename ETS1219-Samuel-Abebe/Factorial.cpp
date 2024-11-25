#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;


    cout << "Enter a positive number: ";
    cin >> num;

    if (cin.fail() || num < 0) {
        cin.clear();
        cin.ignore();
        cout << "Factorial operation is not allowed for your input\n";
    } else {
        for (int i = 1; i <= num; i++) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            sum += factorial;
        }
        cout << "The sum of factorials up to " << num << " is: " << sum << endl;
    }

    return 0;
}
