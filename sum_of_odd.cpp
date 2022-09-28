#include<iostream>
using namespace std;
int main(){
    int val1;
    int val2;
    int i;
    int sumOdd = 0;
    cout<<"Input your first value : "<<endl;
    cin>>val1;
    cout<<"Input your second value : "<<endl;
    cin>>val2;
    for (i= val1; i<=val2; i++){
        if(i%2 != 0){
            sumOdd = sumOdd+i;
        }
    }
    cout<<"The sum is "<<sumOdd;
    
}