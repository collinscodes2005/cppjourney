#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>  v2 = {37, 43, 31, 25, 78, 27};//this is the vector holding the ages of the employees 
    //adddint the missing employeee detials 
    int sum_ages = 0;
    v2.push_back(58);
    v2.push_back(28);

    //for loop to print out the ages 
    for(int i = 0; i<v2.size(); i++){
        cout<<"Age number "<<i+1<<"is : "<<v2[i]<<"\n";
            }
    //for loop to find the average of the ages 
    for(int i = 0; i <v2.size(); i++){

        sum_ages += v2[i];
                   
    }

    cout<<"\n\n\n\n\nSum of ages is:  "<<sum_ages<<"\n";
    
    //this is the average 
    double  average = sum_ages/v2.size();

    cout<<"the average is : "<<average;


}
