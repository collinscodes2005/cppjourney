#include<iostream>
using namespace std;
int main(){
    
    int var;
    int *pointVar;
    //assigning to ampersan of the variable 
    pointVar = &var;

    cout<<"Input a value for your variable : "<<endl;
    cin>>var;
    
    cout<<"The value is "<<var<<endl;
    cout<<"The addressing of the inputed variabale is "<<pointVar<<endl;
    
    
}