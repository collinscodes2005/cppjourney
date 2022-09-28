#include<iostream>
using namespace std;
int main(){
    int array_test[5];
    int *pointVar;
    pointVar = array_test;
    for(int i = 1; i<4; i++){
        cout<<"Input the value "<<i<<" for the array : ";
        cin>>*pointVar;
        pointVar++;
    }

    pointVar = array_test;
    
    for(int i = 1; i<4; i++){
        cout<<"The array element number "<<i<<" is : "<<*pointVar<<endl;
        pointVar++;

    }
}