#include <iostream>
using namespace std;
int main()
{
    //n is the VALUE to be added 
    float temperature[]={1.0,3.4,2.5,9.0,7.5,5.0,4.0}, n = 2.0;
    for(int i=0;i<7;i++)
    {
        cout << temperature[i]+n << endl;
    }

    return 0;
}
