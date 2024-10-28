#include<iostream>
using namespace std;
int main(){
    float balance;
    cout<<"Ente a initial balance:";
    cin>>balance;
    float deposit;
    cout<<"Enter a deposite amount:";
    cin>>deposit;
    float withdrawal;
    cout<<"Enter a withdrawal:";
    cin>>withdrawal;
    balance+=deposit;
    cout<<"balance after deposit:"<<balance<<endl;
    balance-=withdrawal;
    cout<<"enter after withdrewal:"<<balance<<endl;
    cout<<"final balance:"<<balance;
    return 0;
}