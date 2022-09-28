#include <iostream>
using namespace std;
#define SENTINEL 4
int main(){
    int guess;
    cout<<"Welcome to the number guessing game !!"<<endl;
    cout<<"Please enter a new value  for your guessed number"<<endl;
    cin>>guess;


   if(guess!=SENTINEL){
     for(int i = 1; i< 4; i++){
         if(guess!=SENTINEL){
           cout<<"Please try again"<<endl;
           cin>>guess;
         }
         else{
             cout<<"Guess correct, Shutdown!!"<<endl;
             break;
         }
     }
     cout<<"Trial elapsed"<<endl; 
   }
   else
     cout<<"Guess correct";
}

