

#ifndef BANK_CPP_BANK_H
#define BANK_CPP_BANK_H
#include <string>

using namespace std;


class bank {
public:
    bank(string owner);
    bank(string owner, int balance);



    void deposit(int amount);
    void withdraw(int amount);
    int getBalance() const;
    string getowner () const;

private:
    string owner;
    int balance;

};


#endif //BANK_CPP_BANK_H
