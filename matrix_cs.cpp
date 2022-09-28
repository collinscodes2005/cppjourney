#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int b[100][100];
    int appenA_1, appenA_2;
    int appenB_2, appenB_1;

    //inputing the name of the value of the rows and the column 

    cout<<"Enter the number of rows for the matrix : ";
    cin>>appenA_1;

    cout<<"\n Enter the number of columns for the matrix : ";
    cin>>appenA_2;


    for(int i = 0; i<appenA_1; i++){
        for(int j = 0; j<appenA_2; j++){
            cout<<"enter value of row "<<i<<"and column number "<<j<<" : ";
            cin>>a[i][j];

        }
    }
    cout<<"The content of the matrix is : \n\n\n\n\n\n\n";
    //for printing the values of the matrix 
    for(int i = 0; i<appenA_1; i++){
        for(int j = 0; j<appenA_2; j++){
            cout<<a[i][j]<<"\t"
;
        }
        cout<<"\n\n";
    }
    //for printing the addition of the arrays 
    for(int i = 0; i < appenA_1; i++){
        for(int j = 0; j < appenA_1; j++){
             int x = a[i] + a[j];
             cout<<x<<"\n";


        };

    //for the multiplication of the matrix 
    
    };

    
    

}