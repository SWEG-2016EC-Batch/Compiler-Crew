/*Write a program that generates the different patterns given.*/
#include <iostream>
using namespace std;

int main() {
    // Dimensions
    int n1 = 5;
    int n2 = 7, m2 = 8; 
    int n3 = 6; 

    
    // Pattern 1: A 5x5 grid of numbers from 1 to 5
    cout << "Pattern 1: A 5x5 grid of numbers from 1 to 5\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: A 4x6 grid of letters from A to X
    cout << "Pattern 2: A 4x6 grid of letters from A to X\n";
    char letter1 = 'A';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << letter1 << " ";
            letter1++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: A right-angled triangle of numbers
    cout << "Pattern 3: A right-angled triangle of numbers\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

   
    // Pattern 4: Numerical pattern with the right angle to the right
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

    // Pattern 7: Hollow Rectangle with fixed dimension 7x8
    cout << "Pattern 7: Hollow Rectangle with fixed dimension 7x8\n";
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

    // Pattern 8: Inverted Half Pyramid with fixed dimension 6
    cout << "Pattern 8: Inverted Half Pyramid with fixed dimension 6\n";
    for (int i = n3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9: Hollow Inverted Half Pyramid with fixed dimension 6
    cout << "Pattern 9: Hollow Inverted Half Pyramid with fixed dimension 6\n";
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

    // Pattern 10: Full Pyramid with fixed dimension 6 (Stars in odd-numbered columns)
    cout << "Pattern 10: Full Pyramid with fixed dimension 6\n";
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

    // Pattern 11: Inverted Full Pyramid with fixed dimension 6 (Stars in odd-numbered columns)
    cout << "Pattern 11: Inverted Full Pyramid with fixed dimension 6\n";
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

    // Pattern 12: Hollow Full Pyramid with fixed dimension 6 (Correct last row with stars in odd-numbered columns)
    cout << "Pattern 12: Hollow Full Pyramid with fixed dimension 6\n";
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
