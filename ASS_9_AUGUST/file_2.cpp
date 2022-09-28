#include <iostream>

using namespace std;

int main()
{
    int age, option;
    cout<<"Welcome to DSTV NIGERIA______________"<<endl;
    cout<<"To enjoy viewing, enter your age: ";
    cin>>age;
    if(age<16)
    {
        cout<<"You're unable to enjoy viewing access due to restrictions";
    }else if(age>=16)
    {
        cout<<"Welcome to Entertainment"<<endl;
        cout<<"Viewing options:"<<endl;
        cout<<"1. Nigerian Movies"<<endl;
        cout<<"2. American Movies"<<endl;
        cout<<": ";
        cin>>option;
        cout<<endl;
        if(option==1)
        {
            cout<<"Enjoy your viewing";
        }else if(option==2)
        {
            cout<<"Enjoy your viewing";
        }
    }
    return 0;
}
