//this code calculates your cgpa fdrom inputed course scores and course unit 
#include<iostream>
using namespace std;
int main(){
    int unit, grade, point;
    int totalPoints = 0;
    int totalUnits = 0;
    int base = 0;
    double cgpa;
    for(int i=0; i<4; i++){
        cout<<"Input 1 - for A -  5 points"<<endl;
        cout<<"Input 2 - for B -  4 points"<<endl;
        cout<<"Input 3 - for C -  3 points"<<endl;
        cout<<"Input 4 - for D -  4 points"<<endl;
        cout<<"Input 5 - for E -  5 points"<<endl;

        cout<<"Input the course unit: ";
        cin>>unit;
        cout<<"Input your grade:  ";
        cin>>grade;
        /* A -- 5
           B -- 4
           C -- 3
           D -- 2
           E -- 1
           */
        if(grade==1){
            point = unit * 5;
            cout<<"Point for course : \n"<<point;}
        else if(grade==2){
            point = unit * 4;
            cout<<"Point for course : \n"<<point;}
        else if(grade==3){
            point = unit * 3;
            cout<<"Point for course : \n"<<point;}
        else if(grade==4){
            point = unit * 2;
            cout<<"Point for course : \n"<<point;}
        else if(grade== 5){
            point = unit * 1;
            cout<<"Point for course : \n"<<point;}

        totalPoints = totalPoints + point;
        totalUnits = totalUnits + unit;
    }
    cout<<"Total point is --- > \n"<<totalPoints;
    cout<<" totalUnits is ---- > "<<totalUnits;
    
    cgpa = totalPoints / totalUnits;
    

    cout<<"'\n\n\n\n\n The cgpa is "<<cgpa;
}