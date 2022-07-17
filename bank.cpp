#include <string>
#include <iostream>
#include "bank.h"

using namespace std;



 bank::bank(string owner)
{
    this->owner=(owner);
    this->balance=balance;
}
 bank::bank(string owner, int balance)
{
    this->owner=owner;
if(balance<=0)
{
    cout<<"enter a valid balance"<<endl;
}
else
{
    this->balance=balance;
}
}
void bank::deposit(int amount)
{
    if (amount>0)
    {
        balance+=amount;
    } else
    {
        cout<<"enter valid amount"<<endl;
    }
}
void bank::withdraw(int amount)
{
    if (amount>0 && amount<=balance)
    {
        balance-=amount;
    }else
    {
        cout<<"invalid input"<<endl;
    }
}
int bank::getBalance() const
{
    return balance;
}
string bank::getowner () const
{
    return owner;
}
