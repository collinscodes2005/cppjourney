#include<iostream>
using namespace std;
int main(){
    int myarray[6] = {3,5,4,3,53,4};
    int *point;
    point = myarray;
    for(int i = 4; i>=0; i-- ){
        cout<<"Value is ==>>  "<<*point<<" \n";
        point--;
    }
}
