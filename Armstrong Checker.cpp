#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int number, remainder = 0, sum_cubed = 0;
    cout << "Enter an integer to add the digits of: ";
    cin >> number;
    int temp = number;
    while (temp != 0){

        remainder = temp % 10;
        sum_cubed += pow(remainder, 3);
        temp /= 10;
    }
    if (sum_cubed == number){
        cout << "It is an Armstrong number";
    }else {
        cout << "It is not an Armstrong number";
    }
    return 0;
}
