#include <iostream>
#include <string>
#include "bank.h"

using namespace std;

int main()
{
    bank myBankAccount("vikrant",5000);
    bank balu("bhalu");

     balu.deposit(500);
     cout<<"bhalu paise"<<balu.getBalance()<<endl;
     cout<<"mere paise"<<myBankAccount.getBalance()<<endl;
balu.withdraw(1000);




    return 0;
}