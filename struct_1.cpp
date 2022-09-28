//Program to manipulate struct
#include <iostream>

using namespace std;

struct CDAccount {
	double balance;
	double rate;
	int term;
};

int main()
{
	CDAccount account1, account2;
	
	account1.balance = 1000.30;
	account1.rate = 0.4;
	account1.term = 3;
	
	account2.balance = 100000.30;
	account2.rate = 0.4;
	account2.term = 6;
	
	double interest_earned1 = account1.balance * account1.rate * account1.term;
			
	double interest_earned2 = account2.balance * account2.rate * account2.term;
	
	cout << "Interest earned on account 1 is " << interest_earned1 << endl;
	cout << "Interest earned on account 2 is " << interest_earned2 << endl;
}