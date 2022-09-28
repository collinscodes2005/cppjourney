#include<iostream>
using namespace std;
class myClass{  //the class
    public:     //access specifier
         int myNum; //Attribute(int variable)
         string myString; //attribute (string variable)
    };
int main(){
    myClass myObj;
    myObj.myNum = 15;   
    myObj.myString = "Some text";
    

}