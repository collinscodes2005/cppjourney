#include<iostream>
using namespace std;
int main(){
    float val1 (9.87);

    float *pointVal1;
    pointVal1 = &val1;

    cout<<"The value of the variable is : "<<*pointVal1<<endl;
    cout<<"The address of the variable is "<<pointVal1;

}