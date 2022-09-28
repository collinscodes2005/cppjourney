#include<iostream>
using namespace std;

struct Bankaccount{
    double balance;
    double rate;
    int term;
};

int main(){

    Bankaccount account1, account2;

    account1.balance = 1000.50;
    account1.rate = 0.5;
    account1.term = 3;

    account2.balance = 980.43;
    account2.rate = 0.2;
    

}