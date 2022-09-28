#include<iostream>
using namespace std;
int main(){
    int r1,  r2,  c1,  c2;
    int i, j;
    cout<<"enter the row of first matrix : ";
    cin>>r1;
    cout<<"Enter the row of the secnd matrix : ";
    cin>>r2;
    cout<<"enter the column of first matrix : ";
    cin>>c1;
    cout<<"enter the column of second matrix : ";
    cin>>c2;

    int first_matrix[r1][c1];
    int second_matrix[r2][c2];

    cout<<"---First Matrix----\n";
    cout<<"--------------------\n";

    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            cout<<"Input the value of row "<<i<<" || column  "<<j<<" : ";
            cin>>first_matrix[i][j];
            cout<<"\n";
        };
    };

     cout<<"---Second Matrix --- \n";
    cout<<"----------------------- \n";
    for(i = 0; i<r2; i++){
        for(j = 0; j<c2; j++){
        cout<<"Input the value  of row " <<i<<" || column "<<j<<" : ";
        cin>>second_matrix[i][j];
        cout<<" \n"; 
        };
    };


    int multiplied_matrix[r1][c2];

//multiplication matrix works just like maths matrix
// (x1, y1) * (x2, y2) ---> (x1, y2)(--row and column formation )
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            multiplied_matrix[i][j] = 0;
            for(int k = 0; k< r2; k++){
                multiplied_matrix[i][j] += first_matrix[i][k]*second_matrix[k][j];

            }

        }
    }

    //for printing the multiplied_matrix
     for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
           // multiplied_matrix[r1][c2] = 0;
            
                cout<<multiplied_matrix[i][j]<<"\t";
            
            

        }
        cout<<"\n";
    }



}
