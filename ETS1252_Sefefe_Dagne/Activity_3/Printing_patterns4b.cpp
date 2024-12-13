/* update the program in the 4a so that it can accepts inputs for the number of dimensions from users*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2, m2, n3;

    // Pattern 1: A grid of numbers from 1 to n1
    cout << "Enter the dimension for Pattern 1 (grid size): ";
    cin >> n1;
    cout << "Pattern 1: A " << n1 << "x" << n1 << " grid of numbers from 1 to " << n1 << "\n";
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: A grid of letters starting from A
    cout << "Enter the dimensions for Pattern 2 (rows, columns): ";
    cin >> n1 >> m2;
    cout << "Pattern 2: A grid of letters from A to ...\n";
    char letter1 = 'A';
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << letter1 << " ";
            letter1++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: A right-angled triangle of numbers
    cout << "Enter the dimension for Pattern 3 (triangle height): ";
    cin >> n1;
    cout << "Pattern 3: A right-angled triangle of numbers\n";
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4: Numerical pattern with the right angle to the right
    cout << "Enter the dimension for Pattern 4: ";
    cin >> n1;
    cout << "Pattern 4: Numerical pattern with the right angle to the right\n";
    for (int i = 1; i <= n1; i++) {
        for (int j = n1; j > i; j--) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5: Alphabetical pattern (capital letters)
    cout << "Enter the dimension for Pattern 5: ";
    cin >> n1;
    cout << "Pattern 5: Alphabetical pattern (capital letters)\n";
    for (int i = 1; i <= n1; i++) {
        char letter2 = 'A';
        for (int j = 1; j <= i; j++) {
            cout << letter2 << " ";
            letter2++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 6: Alphabetical pattern (lowercase letters)
    cout << "Enter the dimension for Pattern 6: ";
    cin >> n1;
    cout << "Pattern 6: Alphabetical pattern (lowercase letters)\n";
    for (int i = 1; i <= n1; i++) {
        char letter3 = 'a';
        for (int j = 1; j <= n1; j++) {
            cout << letter3 << " ";
            letter3++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 7: Hollow Rectangle with user-defined dimension
    cout << "Enter the dimensions for Pattern 7 (rows, columns): ";
    cin >> n2 >> m2;
    cout << "Pattern 7: Hollow Rectangle with user-defined dimension\n";
    for (int i = 1; i <= n2; i++) {
        for (int j = 1; j <= m2; j++) {
            if (i == 1 || i == n2 || j == 1 || j == m2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 8: Inverted Half Pyramid with user-defined dimension
    cout << "Enter the dimension for Pattern 8: ";
    cin >> n3;
    cout << "Pattern 8: Inverted Half Pyramid with user-defined dimension\n";
    for (int i = n3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9: Hollow Inverted Half Pyramid with user-defined dimension
    cout << "Enter the dimension for Pattern 9: ";
    cin >> n3;
    cout << "Pattern 9: Hollow Inverted Half Pyramid with user-defined dimension\n";
    for (int i = n3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == n3 || j == 1 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 10: Full Pyramid with user-defined dimension (Stars in odd-numbered columns)
    cout << "Enter the dimension for Pattern 10: ";
    cin >> n3;
    cout << "Pattern 10: Full Pyramid with user-defined dimension\n";
    for (int i = 1; i <= n3; i++) {
        for (int j = 1; j <= n3 - i; j++)
            cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 != 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 11: Inverted Full Pyramid with user-defined dimension (Stars in odd-numbered columns)
    cout << "Enter the dimension for Pattern 11: ";
    cin >> n3;
    cout << "Pattern 11: Inverted Full Pyramid with user-defined dimension\n";
    for (int i = n3; i >= 1; i--) {
        for (int j = 1; j <= n3 - i; j++)
            cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 != 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 12: Hollow Full Pyramid with user-defined dimension (Correct last row with stars in odd-numbered columns)
    cout << "Enter the dimension for Pattern 12: ";
    cin >> n3;
    cout << "Pattern 12: Hollow Full Pyramid with user-defined dimension\n";
    for (int i = 1; i <= n3; i++) {
        for (int j = 1; j <= n3 - i; j++)
            cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || (i == n3 && j % 2 != 0))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}

