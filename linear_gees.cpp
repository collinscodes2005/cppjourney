#include<iostream>
using namespace std;
int main(){
    int box[5];
    int flag(-1);
    //user inouting the value 
    for(int i = 0; i<= 4; i++){
        cout<<"Enter the value "<<i + 1<<":for the array : ";
        cin>>box[i];
    }
    //linear search code to search for inputed balue in thearray 
    int search_val;
    cout<<"Please enter the value you are looking for : ";
    cin>>search_val;
    for(int i = 0 ; i<= 5; i++){
        if(box[i] == search_val){
            flag = 0;
            cout<<"Value found \n";
            cout<<"Value is located at position "<<i + 1<<"in array";
            break;
        }
     }
  cout<<"value not found ";
        
        
    

    

}