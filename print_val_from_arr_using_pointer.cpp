#include<iostream>
using namespace std;
int main(){
    //loading an array with pointer
    int myarray[6];
    int *point_arr;
    point_arr = myarray;
    for(int i=0; i < 6; i++){
        cout<<"Input your value "<<i + 1<<" for the array :";
        cin>>*point_arr;
        point_arr++;

    }
    point_arr = myarray;
    //printing an array with pointer
    for(int i = 0; i < 6; i++){
        cout<<"The value "<<i + 1<<" of your array is "<<point_arr<<endl;
        *point_arr++;

    }
    return 0;
}
   
