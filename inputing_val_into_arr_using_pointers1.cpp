#include<iostream>
using namespace std;
int main(){
    
    int myArray[5];
    int *pointerArray;
    pointerArray = myArray;
    for (int i = 0; i < 5; i++){
        cout<<"Please input value "<<i<<"for the array : ";
        cin>>*pointerArray;
        pointerArray++;


    }
    


}