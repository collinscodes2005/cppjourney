#include<iostream>
using namespace std;
int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
    
}
int main(){
  int a, b;
  cout<<"Input the first value:"<<endl;
  cin>>a;
  cout<<"Input the second value:"<<endl; 
  cin>>b;

  cout<<"The sum is:"<<add(a,b);

}