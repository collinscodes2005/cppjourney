#include<iostream>
using namespace std;
int main(){
    int i;
    int array[5];
    for(i = 0; i <= 5; i++){
        cout<<"Input the "<<i + 1<<" Value of your matric number : \n";
        cin>>array[i];
        cout<<"\n";}
         
        for (i = 0;i <= 5; i++){
                if(array[i] % 2 != 0){
                    cout<<"_____________________________________\n";
                    cout<<" Valid even val in the matric no is : "<<array[i]<<"\n";
                    cout<<"\n____________________________________ ";
                }
                
        }
    }


    

