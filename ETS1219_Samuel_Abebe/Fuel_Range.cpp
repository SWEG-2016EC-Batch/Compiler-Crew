#include <iostream>
using namespace std;
int main(){
    float mpg, fuel_capacity;
    cout<<"This program can find how many miles your car can go\ngiven your car's fuel tank capacity in gallons and\nyour car's fuel consumption in MPG. Multiplying the\nfuel capacity with MPG will give you how many miles your car can go.\n";
    cout<<"*************************************************\n";
    capacity_entry:
    cout<<"Enter your car's fuel capacity in gallons?: ";
    cin>>fuel_capacity;
        if(cin.fail() || fuel_capacity<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input! Try Again";
        goto capacity_entry;
    }else{
    mpg_entry:
    cout<<"Enter your car's fuel consumption in miles per gallon (mpg).\nCheck you owner's manual on the fuel section if you don't know it: ";
    cin>>mpg;
        if(cin.fail() || mpg<=0){
        cin.clear();
        cin.ignore();
        goto mpg_entry;
        cout<<"Invalid input! Try Again";
    }else{
    cout<<"Your car can go "<<fuel_capacity*mpg<<" miles on a full tank of gas\n";
    cout<<"Exiting... Thank you";
    }
    }
    return 0;
}
