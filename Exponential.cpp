#include <iostream>
using namespace std;
int main(){
    float base, exponent;
    cout<<"This program can be used to solve exponential expressions.\n";
    cout<<"******************************\n";
    base_entry:
    cout<<"Enter the base: ";
    cin>>base;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto base_entry;
    }else{
    float orignal_base=base;
    exponent_entry:
    cout<<"Enter the exponent: ";
    cin>>exponent;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto exponent_entry;
    }else if(exponent == 0){
        cout<<"The result of "<<orignal_base<<"^"<<exponent<<" is: 1";
        return 0;
    }else{
    for(int i = 1; i < exponent; i++){
        base=base*orignal_base;
    }
    cout<<"The result of "<<orignal_base<<"^"<<exponent<<" is: \n"<<base;
    cout<<"Exiting...Thank You";
    }
    }
    return 0;
}
