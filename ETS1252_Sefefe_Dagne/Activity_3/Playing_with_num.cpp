/* Write a program that accepts an integer from the user and performs the following .Once you complete solving all the exercises compile it and prepare a menu*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\nSelect a task:\n";
        cout << "1. Print the reverse of the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Find the product of even digits\n";
        cout << "4. Print the first and last digit and their sum\n";
        cout << "5. Swap the first and last digit\n";
        cout << "6. Check whether a number is palindrome or not\n";
        cout << "7. Find the frequency of each digit\n";
        cout << "8. Check if a number is strong\n";
        cout << "9. Check whether a number is perfect or not\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            int num, reversedNum = 0;
            cout << "Enter an integer: ";
            cin >> num;

            while (num != 0) {
                int digit = num % 10;
                reversedNum = reversedNum * 10 + digit;
                num /= 10;
            }

            cout << "Reversed Number: " << reversedNum << endl;
        } else if (choice == 2) {
            int num, count = 0;
            cout << "Enter an integer: ";
            cin >> num;

            while (num != 0) {
                num /= 10;
                count++;
            }

            cout << "Number of digits: " << count << endl;
        } else if (choice == 3) {
            int num, product = 1;
            bool hasEven = false;

            cout << "Enter an integer: ";
            cin >> num;

            while (num != 0) {
                int digit = num % 10;
                if (digit % 2 == 0) {
                    product *= digit;
                    hasEven = true;
                }
                num /= 10;
            }

            if (hasEven) {
                cout << "Product of even digits: " << product << endl;
            } else {
                cout << "No even digits found." << endl;
            }
        } else if (choice == 4) {
            int num;
            cout << "Enter an integer: ";
            cin >> num;

            int lastDigit = num % 10;
            int firstDigit = num;

            while (firstDigit >= 10) {
                firstDigit /= 10;
            }

            int sum = firstDigit + lastDigit;

            cout << "First digit: " << firstDigit << endl;
            cout << "Last digit: " << lastDigit << endl;
            cout << "Sum: " << sum << endl;
        } else if (choice == 5) {
            int num, swappedNum, firstDigit, lastDigit, digits;

            cout << "Enter an integer: ";
            cin >> num;

            lastDigit = num % 10;
            firstDigit = num;

            while (firstDigit >= 10) {
                firstDigit /= 10;
            }

            digits = log10(num);

            swappedNum = lastDigit * pow(10, digits);
            swappedNum += num % static_cast<int>(pow(10, digits));
            swappedNum -= lastDigit;
            swappedNum += firstDigit;

            cout << "Number after swapping first and last digit: " << swappedNum << endl;
        } else if (choice == 6) {
            int num, originalNum, reversedNum = 0;
            cout << "Enter an integer: ";
            cin >> num;

            originalNum = num;

            while (num != 0) {
                int digit = num % 10;
                reversedNum = reversedNum * 10 + digit;
                num /= 10;
            }

            if (originalNum == reversedNum) {
                cout << originalNum << " is a palindrome." << endl;
            } else {
                cout << originalNum << " is not a palindrome." << endl;
            }
        } else if (choice == 7) {
            int num;
            vector<int> frequency(10, 0);

            cout << "Enter an integer: ";
            cin >> num;

            while (num != 0) {
                int digit = num % 10;
                frequency[digit]++;
                num /= 10;
            }

            cout << "Digit Frequency" << endl;
            for (int i = 0; i < 10; i++) {
                if (frequency[i] > 0) {
                    cout << "   " << i << "       " << frequency[i] << endl;
                }
            }
        } else if (choice == 8) {
            int num, originalNum, sum = 0;
            cout << "Enter an integer: ";
            cin >> num;

            originalNum = num;

            auto factorial = [](int n) {
                if (n == 0) return 1;
                int fact = 1;
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                return fact;
            };

            while (num != 0) {
                int digit = num % 10;
                sum += factorial(digit);
                num /= 10;
            }

            if (sum == originalNum) {
                cout << originalNum << " is a Strong number." << endl;
            } else {
                cout << originalNum << " is not a Strong number." << endl;
            }
        } else if (choice == 9) {
            int num, sum = 0;
            cout << "Enter an integer: ";
            cin >> num;

            for (int i = 1; i <= num / 2; i++) {
                if (num % i == 0) {
                    sum += i;
                }
            }

            if (sum == num) {
                cout << num << " is a Perfect number." << endl;
            } else {
                cout << num << " is not a Perfect number." << endl;
            }
        } else if (choice == 10) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 10);

    return 0;
}

