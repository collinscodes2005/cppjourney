#include<iostream>
#include<cstring>
using namespace std;
void myPrinterForCollins(){
    cout<<"My name is collins";
}
void myPrinterForIklaki(){
    cout<<"Mandem name is iklaki"<<endl;
}
int main(){
    char selector[15];
    cout<<"Enter a value for the name you want : ";
    cin>>selector;
    if(strcmp("collins",selector)==0){
        myPrinterForCollins();
    }
    else if(strcmp("iklaki",selector)==0){
        myPrinterForIklaki();
    }


    return 0;
}