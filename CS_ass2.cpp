
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<float> sales;
    float price, total = 0;
    int item, count, sum;

    cout<<"Input the price of first good:  ";
    cin>>price;

    while(price > 0){
        sales.push_back(price);
        cout<<"please input the next good price :";
        cin>>price;
        sales.push_back(price);
        total += price;

    }
    cout<<"Total price is      "<<total;
    cout<<"All the sales made today are : \n";
    for(count = 0; count<sales.size(); count++){
        cout<<sales[count]<<endl;
    }
    cout<<"We have "<<sales.size()<<"    No of sales today";


}`