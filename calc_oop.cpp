#include<iostream>
using namespace std;
class calc
{
    public: 

        int add, sub;
        int plus(){
            int a;
            int b;
            cout<<"enter the value 1: ";
            cin>>a;
            cout<<"Enter the value 2 : ";
            cin>>b;

            add = a+b;
           
            cout<<add;
            return add;

        }
        int minus(){
            int a;
            int b;
            cout<<"Enter the value 1 : ";
           cin>>a;
            cout<<"Enter the value 2 : ";
            cin>>b;

            sub = a-b;
             
            cout<<sub;
           
            return sub;
    }
};

int main(){
    calc obj;
    int choice;
    cout<<"What operation do you want to perform : (1 for yes || 0 for no) :  ";
    cin>>choice;
    if(choice == 1){
        obj.plus();
    }
    else{
        obj.minus();
    };

}
