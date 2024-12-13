#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice, temp, digit = 0, rev = 0;

    while (true) {
        number_entry:
        cout << "Enter a number: ";
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid input! Try Again\n";
            goto number_entry;
        }
        temp = num;

        menu:
        cout << "\nMenu:\n";
        cout << "1. Reverse of the number\n";
        cout << "2. Number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. First and last digit sum\n";
        cout << "5. Swap first and last digit\n";
        cout << "6. Check if Palindrome\n";
        cout << "7. Frequency of each digit\n";
        cout << "8. Check if Armstrong\n";
        cout << "9. Check if Strong\n";
        cout << "10. Check if Perfect\n";
        cout << "11. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Invalid input! Try Again\n";
            goto menu;
        }

        switch (choice) {
            case 1: { // Reverse number
                int reversed = 0;
                while (temp > 0) {
                    digit = temp % 10;
                    reversed = reversed * 10 + digit;
                    temp /= 10;
                }
                cout << "Reverse of the number: " << reversed << endl;
                break;
            }
            case 2: { // Number of digits
                int count = 0;
                while (temp > 0) {
                    count++;
                    temp /= 10;
                }
                cout << "Number of digits: " << count << endl;
                break;
            }
            case 3: { // Product of even digits
                int product = 1;
                bool hasEven = false;
                while (temp > 0) {
                    digit = temp % 10;
                    if (digit % 2 == 0) {
                        product *= digit;
                        hasEven = true;
                    }
                    temp /= 10;
                }
                cout << "Product of even digits: " << (hasEven ? product : 0) << endl;
                break;
            }
            case 4: { // First and last digit sum
                int lastDigit = num % 10;
                while (temp >= 10) {
                    temp /= 10;
                }
                int firstDigit = temp;
                cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << ", Sum: " << firstDigit + lastDigit << endl;
                break;
            }
            case 5: { // Swap first and last digit
                string numStr = to_string(num);
                swap(numStr[0], numStr[numStr.length() - 1]);
                cout << "Number with swapped first and last digit: " << stoi(numStr) << endl;
                break;
            }
            case 6: { // Palindrome Checker
                int reversed = 0, original = num;
                while (temp > 0) {
                    reversed = reversed * 10 + temp % 10;
                    temp /= 10;
                }
                cout << "Is Palindrome: " << (original == reversed ? "Yes" : "No") << endl;
                break;
            }
            case 7: { // Frequency of each digit
                int freq[10] = {0};
                while (temp > 0) {
                    freq[temp % 10]++;
                    temp /= 10;
                }
                cout << "Digit\tFrequency\n";
                for (int i = 0; i < 10; i++) {
                    if (freq[i] > 0) {
                        cout << i << "\t" << freq[i] << endl;
                    }
                }
                break;
            }
            case 8: { // Armstrong Checker
                int sum = 0, original = num;
                while (temp > 0) {
                    digit = temp % 10;
                    sum += pow(digit, 3);
                    temp /= 10;
                }
                cout << "Is Armstrong: " << (sum == original ? "Yes" : "No") << endl;
                break;
            }
            case 9: { // Strong Checker
                int sum = 0, original = num;
                while (temp > 0) {
                    digit = temp % 10;
                    int fact = 1;
                    for (int i = 1; i <= digit; i++) {
                        fact *= i;
                    }
                    sum += fact;
                    temp /= 10;
                }
                cout << "Is Strong: " << (sum == original ? "Yes" : "No") << endl;
                break;
            }
            case 10: { // Perfect Checker
                int sum = 0;
                for (int i = 1; i < num; i++) {
                    if (num % i == 0) {
                        sum += i;
                    }
                }
                cout << "Is Perfect: " << (sum == num ? "Yes" : "No") << endl;
                break;
            }
            case 11:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n" << endl;
        }
    }

    return 0;
}
