//code for banking system
// 302 on first group of numbers is for Zenith bank
// 2 on first group of numbers is for UBA bank
// 5 on first group of numbers is UBA bank
// 1 on first group of nubers is FCMB bank
// 0 onnfirst group of number is firstbank
// 6 on first group of numbers is GTbank
#include <iostream>
using namespace std;
int main() 
{
  //Declaration of variables 
  int accountNumber[] = {0};
  int amount;
  int choice;
  int passcode;


  //getting phone number length
  //  -------- int getArrayLength = sizeof(myNumbers) / sizeof(int);
  //
  //
  
  int netl;//For choosing network provider
  cout << "Welcome to Intelli-Banking"<< endl;
  cout << "What are we doing Today"<< endl;
  cout << "1. Transfer"<< endl;
  cout << "2. Airtime"<< endl;
  cout << ">> ";
  cin>>choice;
 //Please write correct codes
  switch(choice){
    case 1:
      //Inputing the account bumber//
      
      for (int i = 0; i>=10; i++){
        cout<<"Enter "<<i<<"Value of the account number"<<endl;
        cin>>accountNumber[i];
      }
    int getArrayLength = sizeof(accountNumber) / sizeof(int);
    
      

/*
    case 2:
      //Picking network provider
      cout << "Choose your Network Provider"<<endl;
      cout << "1. Airtel"<<endl;
      cout << "2. Glo"<<endl;
      cout << "3. Mtn"<<endl;
      cout << "4. 9-Mobile"<<endl;
      cout << "5. Spectranet(Mi-Fi, Router)"<<endl;
      cout << ">> ";
      cin >> netl;
      if(netl == 1)
      {
        cout << "Buy as:";
        cout << "1. Airtime";
        cout << "2. Data";
      }

    default:*/
    
  }
  
  
  









  
 }