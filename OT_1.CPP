#include <iostream>
using namespace std;
class calc{
    public:
      int add;
      int sub;

      int addition(){
        int a,b;
        cout<<"input the first value: ";
        cin>>a;
        cout<<"Enter the second value : ";
        cin>>b;

        add = a+b;
        
        cout<<"value is "<<add;
        return add;
//----------------------------------------------------------------------------------------------------//
      }
      int subtract(){
        int a, b;
        cout<<"input the first value: ";
        cin>>a;
        cout<<"Enter the second value : ";
        cin>>b;

        sub = a-b;
        return sub;
        cout<<"Value is "<<sub;
      }


};

int main(){

    calc obj;

    int choice;

    cout<<"Do you want to add or subtract (1/0) : ";
    cin>>choice;
    if(choice == 1){
        obj.addition();

    }
    else{
        obj.subtract();
        

    }

}
