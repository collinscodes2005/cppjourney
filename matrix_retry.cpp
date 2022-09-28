#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"input the row dimension  for first matrix: ";
    cin>>r1;
    cout<<"input the column dimension for the first matrix: ";
    cin>>c1;

    cout<<"input the row dimension  for second matrix: ";
    cin>>r2;
    cout<<"input the column dimension for the second  matrix: ";
    cin>>c2;

    int first_matrix[r1][c1];
    int second_matrix[r2][c2];


    //loadiing the array of the first matrix
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c1; j++){
            cout<<"Enter the value for row "<<i<<"column "<<j<<"of the first matrix : ";
            cin>>first_matrix[i][j];
        }
    }

    cout<<"____________________________________________________________________\n";
    cout<<"-----------Inputing the values for the second matrix ---------------\n";


    //loading the array of the second matrix 
    for(int i = 0; i<r2; i++){
        for(int j = 0; j<c2; j++){
            cout<<"Enter the value for row "<<i<<" column "<<j<<"of the second matrix : ";
            cin>>second_matrix[i][j];

        }
    }
    //this code is the one that multiply the matrix 
    int mul_matrix[r1][c2];
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            mul_matrix[r1][c2] = 0;
            //k is a unique varialbe that heos us with the proper multplying of the matrix 
            for(int k = 0; k < r2; k++){
                mul_matrix[i][j] = first_matrix[i][k]*second_matrix[j][k];
            }
            
        }
    }

    //this code is the one printing the matrix for us 
    cout<<"------this is the multiplied matrix ----- \n";
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            cout<<mul_matrix[i][j]<<"\t";

        }
        cout<<"\n";
    }
}