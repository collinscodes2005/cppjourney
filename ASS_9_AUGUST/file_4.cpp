#include <iostream>
#include <cstring>
using namespace std;
//ocode showing concatenation and length of stringss
int main()
{
    string first_name= "Ikotun ";
    string last_name= "Collins";
    string full_name= first_name + last_name; // - This is concatenation { Joining the strings together}
    int length = sizeof(first_name) + sizeof(last_name) / sizeof(full_name); //{ this is getting getting the length - {hehe}}
    cout<<full_name<<" "<<full_name.size();

    return 0;
}

