#include <iostream>
using namespace std;

int main() {
    int choice, number;

    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. Sum of first and last digit\n";
        cout << "5. Swap first and last digit\n";
        cout << "6. Check if palindrome\n";
        cout << "7. Digit frequency\n";
        cout << "8. Check if Strong number\n";
        cout << "9. Check if Perfect number\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        cout << "Enter a number: ";
        cin >> number;

        switch (choice) {
            case 1: { // Reverse the number
                int reverse = 0, temp = number;
                while (temp > 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                cout << "Reversed number: " << reverse << endl;
                break;
            }
            case 2: { // Count the number of digits
                int count = 0, temp = number;
                while (temp > 0) {
                    count++;
                    temp /= 10;
                }
                cout << "Number of digits: " << count << endl;
                break;
            }
            case 3: { // Product of even digits
                int product = 1, temp = number, hasEven = 0;
                while (temp > 0) {
                    int digit = temp % 10;
                    if (digit % 2 == 0) {
                        product *= digit;
                        hasEven = 1;
                    }
                    temp /= 10;
                }
                if (hasEven)
                    cout << "Product of even digits: " << product << endl;
                else
                    cout << "No even digits in the number.\n";
                break;
            }
            case 4: { // Sum of first and last digit
                int first, last = number % 10;
                int temp = number;
                while (temp >= 10) temp /= 10;
                first = temp;
                cout << "First digit: " << first << ", Last digit: " << last << endl;
                cout << "Sum: " << first + last << endl;
                break;
            }
            case 5: { // Swap first and last digit
                int first, last = number % 10, temp = number, divisor = 1;
                while (temp >= 10) {
                    temp /= 10;
                    divisor *= 10;
                }
                first = temp;
                int swapped = last * divisor + (number % divisor - last) + first;
                cout << "Number after swapping: " << swapped << endl;
                break;
            }
            case 6: { // Check if palindrome
                int reverse = 0, temp = number;
                while (temp > 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                if (reverse == number)
                    cout << "The number is a palindrome.\n";
                else
                    cout << "The number is not a palindrome.\n";
                break;
            }
            case 7: { // Digit frequency
                int freq[10] = {0};
                int temp = number;
                while (temp > 0) {
                    freq[temp % 10]++;
                    temp /= 10;
                }
                cout << "Digit frequencies:\n";
                for (int i = 0; i < 10; i++) {
                    if (freq[i] > 0)
                        cout << i << ": " << freq[i] << endl;
                }
                break;
            }
            case 8: { // Check if Strong number
                int sum = 0, temp = number;
                while (temp > 0) {
                    int digit = temp % 10;
                    int fact = 1;
                    for (int i = 1; i <= digit; i++) {
                        fact *= i;
                    }
                    sum += fact;
                    temp /= 10;
                }
                if (sum == number)
                    cout << "The number is a Strong number.\n";
                else
                    cout << "The number is not a Strong number.\n";
                break;
            }
            case 9: { // Check if Perfect number
                int sum = 0;
                for (int i = 1; i <= number / 2; i++) {
                    if (number % i == 0)
                        sum += i;
                }
                if (sum == number)
                    cout << "The number is a Perfect number.\n";
                else
                    cout << "The number is not a Perfect number.\n";
                break;
            }
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    cout << "Program terminated.\n";
    return 0;
}
