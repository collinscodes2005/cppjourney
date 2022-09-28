//by collins- github@collinscodes2005
#include<iostream>
//This code uses the linear search algorthm to find inputed elemenrs in an array
using namespace std;
//This is the linear search function 
//it takes in the array, and also the number to be searched for

int Linearearch(int arr[], int val){
    bool flag = false;
    for(int i = 0; i <= 10; i++){
        if(arr[i] == val){
            cout<<"The value you inputed is found in the location  "<<i + 1<<" \n";
            flag = true;
            break;

        }
    }
        if(flag == false){
            cout<<"No Match found";
        }
    }    
//this is the main function
//Just does the normal basic shit and parses the arguments innto the function
int main(){
    int array_box[10] = {12, 23, 34, 43, 56, 2, 8, 98, 99, 89};
    int val;
    cout<<"Enter a value you want to search for :  ";
    cin>>val;

    Linearearch(array_box, val);
    return 0;
}