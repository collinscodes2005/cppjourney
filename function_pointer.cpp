#include<iostream>
using namespace std;
int maximum_value(int *a, int *b, int *c);
int main(){
    int first,second,third;
    cout<<"Input the values : "<<endl;
    cin>>first;
    cout<<"Second : \n";
    cin>>second;
    cout<<"Input the thrid val : ";
    cin>>third;
    cout<<"The maximum value here is : "<<maximum_value(&first, &second, &third)<<"   val";

}
int maximum_value(int *a, int *b, int *c){
    int max;
    if(*a>*b && *a>*c){
        max = *a;
    }
    else if(*b>*a && *b>*c){
        max =  *b;
    }
    else{
        max = *c;
    }
    return max;
}