//Program to create an ATM using classes
#include <iostream>
#include <string>

using namespace std;

class ATM {
	// withdraw, transfer, check balance
	public:
		ATM(double initial_balance, string username);
		withdraw(double amount);
		transfer(double amount);
		double check_balance();
		display_name();
	
	private:
		double balance;
		string name;
};

ATM::ATM(double initial_balance, string username){
	balance = initial_balance;
	name = username;
}

ATM::withdraw(double amount){
	if (amount > balance){
		cout << "Insufficient balance\n";
	}else {
		balance = balance - amount;
		cout << "You've successfully withdrawn " << amount << endl;
	}
}

ATM::transfer(double amount){
	if (amount > balance){
		cout << "Insufficient balance\n";
	} else {
			balance = balance - amount;
		cout << "You've successfully transfered " << amount << endl;
	}
}

double ATM::check_balance(){
	return balance;
}

ATM::display_name(){
	cout << name << "\n";
}

int main(){
	string name = "James";
	ATM atm(10000, name);
	int option;
	cout << "Please enter an option\n";
	cout << "1 - Withdraw\n";
	cout << "2 - Transfer\n";
	cout << "3 - Check Balance\n";
	cout << "-1 - Exit\n";
	
	cin >> option;
	
	while (option != -1){
		switch (option){
			case 1:
				double withdrawalAmount;
				cout << "Enter amount to withdraw\n";
				cin >> withdrawalAmount;
				atm.withdraw(withdrawalAmount);
				break;
				
			case 2:
				double transferAmount;
				cout << "Enter amount to transfer\n";
				cin >> transferAmount;
				atm.transfer(transferAmount);
				break;
		
			case 3:
				double balance = atm.check_balance();
				cout << "Balance is " << balance << endl;
				break;
		}
		
		cout << "\n\nPlease enter an option\n";
		cout << "1 - Withdraw\n";
		cout << "2 - Transfer\n";
		cout << "3 - Check Balance\n";
		cout << "-1 - Exit\n";
	
		cin >> option;
	}
	
}