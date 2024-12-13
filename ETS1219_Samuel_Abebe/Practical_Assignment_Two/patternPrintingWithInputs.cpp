#include <iostream>
using namespace std;

int main() {
    unsigned int n, temp;
    a:
    cout << "Enter Number of Rows: ";
    cin >> temp;
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input! Try Again.\n";
        goto a;
    }

    cout << "Square pattern with increasing numbers on each line\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }

    cout << "\nSquare pattern with increasing alphabet letter over the whole square\n\n";
    {
        n = temp;
        char letter = 'A';
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= (n + 2); j++) {
                cout << letter << " ";
                letter++;
                if (letter > 'Z') {
                    letter = 'A';
                }
            }
            cout << "\n";
        }
    }

    cout << "\nIncreasing Triangle that goes to the right\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }

    cout << "\nIncreasing Triangle that goes to the left with numbers\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = n; j > i; j--) {
                cout << "  ";
            }
            for (int k = 1; k <= i; k++) {
                cout << k << " ";
            }
            cout << "\n";
        }
    }

    cout << "\nIncreasing triangle that goes to the right with letters\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                char letter = 'A' + ((i * (i + 1) / 2 + j) % 26);
                cout << letter << " ";
            }
            cout << "\n";
        }
    }

    cout << "\nSquare pattern with increasing letters on each line\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (char j = 'a'; j <= 'a' + n; j++) {
                if (j > 'y') {
                    cout<<"z ";
                    j = 'a';
                    break;
                }
                cout << j << " ";
            }
            cout << "\n";
        }
    }

    cout << "\nHollow quadrilateral pattern with '*' symbols\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= (n + 1); j++) {
                if (i == 1 || i == n || j == 1 || j == (n + 1)) {
                    cout << "* ";
                } else {
                    cout << "  ";  // If you put only one space, the pattern will be messed up because the above line will put 2 spaces
                }
            }
            cout << "\n";
        }
    }

    cout << "\nInverted half Pyramid\n\n";
    {
        n = temp;
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }

    cout << "\nHollow Inverted half Pyramid\n\n";
    {
        n = temp;
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                if (i == 1 || i == n || j == 1 || i == j) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }

    cout << "\nFull Pyramid\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j >= (n - (i - 1)) && j <= (n + (i - 1))) {
                    cout << "* ";
                } else {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }

    cout << "\nInverted Full Pyramid\n\n";
    {
        n = temp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " ";
            }
            for (int j = i; j <= n; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }

    cout << "\nHollow Full Pyramid\n\n";
    {
        n = temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i || i == n - 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
