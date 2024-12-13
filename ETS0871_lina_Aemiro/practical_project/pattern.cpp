#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the dimension (size of the pattern)
    cout << "Enter the dimension (n): ";
    cin >> n;

    // Pattern 1: Increasing Numbers in Rows
    cout << "\nPattern 1: Increasing Numbers in Rows\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Pattern 2: Decreasing Numbers in Columns
    cout << "\nPattern 2: Decreasing Numbers in Columns\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (n - j + 1) << " ";
        }
        cout << endl;
    }

    // Pattern 3: Alphabets in Rows
    cout << "\nPattern 3: Alphabets in Rows\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }

    // Pattern 4: Increasing Alphabets in Columns
    cout << "\nPattern 4: Increasing Alphabets in Columns\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }

    // Pattern 5: Repeating Small Alphabets
    cout << "\nPattern 5: Repeating Small Alphabets\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << char('a' + i - 1) << " ";
        }
        cout << endl;
    }

    // Pattern 6: Hollow Square of *
    cout << "\nPattern 6: Hollow Square of *\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Pattern 7: Inverted Half Pyramid
    cout << "\nPattern 7: Inverted Half Pyramid\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 8: Hollow Inverted Half Pyramid
    cout << "\nPattern 8: Hollow Inverted Half Pyramid\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Pattern 9: Full Pyramid
    cout << "\nPattern 9: Full Pyramid\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 10: Inverted Full Pyramid
    cout << "\nPattern 10: Inverted Full Pyramid\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= (n - i); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 11: Hollow Full Pyramid
    cout << "\nPattern 11: Hollow Full Pyramid\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Pattern 12: Hollow Inverted Full Pyramid
    cout << "\nPattern 12: Hollow Inverted Full Pyramid\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= (n - i); j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
