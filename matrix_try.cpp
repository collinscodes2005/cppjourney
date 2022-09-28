#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3};
    int b[] = {5, 6, 7};
     
    int * matrix[] = {a, b};

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout<<"The matrix is"<<i<<" id " <<j <<"is" <<" : "<<matrix[i][j]<<" \n";

        }
    }

}