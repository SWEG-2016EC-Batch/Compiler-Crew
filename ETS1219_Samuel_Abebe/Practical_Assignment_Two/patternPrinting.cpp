#include <iostream>
using namespace std;
int main(){
    cout<<"Square pattern with increasing numbers on each line\n";
    for(int i=1; i<=5; i++){
        for (int j=1; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<"Square pattern with increasing alphabet letter over the whole square\n\n";

    char letter = 'A';
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 6; j++){
            cout << letter << " ";
            letter++;
            }
        cout << "\n";
    }


    cout<<"\n";
    cout<<"Increasing Triangle that goes to the right\n\n";
    cout<<"\n";
    for(int i=1; i<=5; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<"Increasing Triangle that goes to the left with numbers\n\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j > i; j--) {
            cout << "  ";
        }

        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << "\n";
    }


    cout<<"\n";
    cout<<"Increasing triangle that goes to the right with letters\n\n";
    for(int i=0; i<5; i++){
        for (char j='A'; j<='A'+i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<"Square pattern with increasing numbers on each line\n\n";
    for(int i=1; i<=5; i++){
        for (char j='a'; j<='a'+4; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    cout<<"Hollow quadrilateral pattern with '*' symbols\n\n";
    for(int i = 1; i <= 7; i++){
        for(int j = 1; j <= 8; j++){
            if(i == 1 || i == 7 || j == 1 || j == 8){
                cout<<"* ";
                }
            else{
                cout<<"  ";//If u put only one space the pattern will be messed up cause the above line will put 2 spaces
            }
        }
    cout<<"\n";
    }


    cout<<"\n";
    cout<<"Inverted half Pyramid\n\n";
    for(int i = 6; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
    cout<<"\n";
    }


    cout<<"\n";
    cout<<"Hollow Inverted half Pyramid\n\n";
    for(int i = 6; i>=1; i--){
        for(int j=1; j<=i; j++){
            if(i==1 || i==6 || j==1 || i==j)
            cout<<"* ";
            else
            cout<<"  ";
        }
    cout<<"\n";
    }

    cout<<"\n";
    cout<<"Full Pyramid\n\n";
    int n=6;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if(j>=(n-(i-1)) && j<=(n+(i-1))){
            cout<<"* ";
            }
            else{
            cout<<" ";
            }
        }
        cout<<"\n";
    }


    cout << "\nInverted Full Pyramid\n\n";
    int n2 = 6;
    for (int i = 1; i <= n2; i++){
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = i; j <= n2; j++) {
            cout << "* ";
        }
        cout << "\n";
    }


    cout << "\nHollow Full Pyramid\n\n";
    int n3 = 6;
    for (int i = 0; i < n3; i++) {
        for (int j = 0; j < n3 - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == n3 - 1) {
            cout << "* ";
            }else{
            cout << "  ";
            }
        }
    cout << "\n";
    }
    return 0;
}
