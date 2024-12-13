/*Write a program that generates the different patterns given.*/
#include <iostream>
using namespace std;

int main() {
    //This is the first pattern
    cout << "Pattern 1: A 5x5 grid of numbers from 1 to 5\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // This is the second pattern
    cout << "Pattern 2: A 4x6 grid of letters from A to X\n";
    char letter = 'A';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    cout << endl;

    // This is the third pattern
    cout << "Pattern 3: A right-angled triangle of numbers\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

