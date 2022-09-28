#include<iostream>
using namespace std;
int main(){
    int u = 3;
    int v;
    int * pu;
    int * pv;
    pu = &u;
    v = *pu;
    pv = &v;

    cout<<"u = "<<pu<<"pu = "<<*pu;


}