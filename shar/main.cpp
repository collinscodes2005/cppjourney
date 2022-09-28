#include<iostream>
//This code uses the linear search algorthm to find inputed elemenrs in an array
using namespace std;
int main(){
    int array_box[10] = {12, 23, 34, 43, 56, 2, 8, 9};
    int val;
    cout<<"Enter the value the user wants to search for : ";
    cin>>val;

    int flag = -1;
    for(int i = 0; i <= 10; i++){
        if(array_box[i] == val){
            cout<<"The value you inputed is found in the location  "<<i + 1<<" \n";
            flag = 0;
            break;

        }}
        if (flag == -1){
            cout<<"No Match found";



    }


}
