#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> student_fees = {300000, 450000, 219000, 34000, 67000};
    int count;
    int sum = 0;
    for(count = 0; count<=5; count++){
        sum += student_fees[0];
    }
    cout<<"Total sum of fees  = "<<sum<<endl;
    cout<<"The capacity of the array is "<<student_fees.capacity();
    
}