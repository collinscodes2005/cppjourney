#include<iostream>
using namespace std;
int main(){
     //this code determines the network of an inputed phone number 
     char network_provider[10];
     int amount;
     int phone_no;
     string operation;
     cout<<"Input your phone number"<<endl;
     cin>>phone_no;
     if (phone_no < 100000000 || phone_no > 100000000000){
         cout<<"Invalid input"<<endl;}
     else{
         cout<<"WWhat operation do you want to perform? : "<<endl;
         cin>>operation;
         if (operation=="recharge"){
             cout<<"How much do you want to recharge?(100//200//500//1000) : "<<endl;
             cin>>amount;
             switch (amount)
             {
             case 100:
                    cout<<"youve successfully recharged  "<<phone_no<<"with"<<amount<<"naira"<<endl;
                 /* code */
                 break;
             
             default:
                 break;
             }
             
         }    }
}
