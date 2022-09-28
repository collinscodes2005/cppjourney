#include<iostream>
using namespace std;
int main(){
    //Welcome to the competition vaidation system
    cout<<"Welcome to the copetition validation system"<<endl;
    cout<<"This system helps to check if you can partake in specific areas of the competiton"<<endl;
    int gender;
    int age; 
    int height;//{In feets}
    int weight;
    cout<<"Are you are Male or a Female---> Input(1 or 0) : ";
    cin>>gender;
    if(gender==1){
        cout<<"How old are you ? --- > : ";
            cin>>age;
            if(age<18) cout<<"You cannot participate in this program";
            else{
                cout<<"Age accepted"<<endl;
                cout<<"What is your height (figure value only) ? ------ >";
                cin>>height;
                if(height < 5) cout<<"You cannot participate in the competition";
                else{
                    cout<<"You can participate in this competition"<<endl;
                    cout<<"What is your weight ?  --->";
                    cin>>weight;
                    if(weight<50 && weight>62){
                        cout<<"You can only participate in the dancing and not in the running competition";
                    }
                    else{
                        cout<<"Successful validation"<<endl;
                        cout<<"You can participate in both dancing and running competiton";
                    }
    }
}
    }
    else if(gender == 0){
        int pregnancy_validation;
        cout<<"Have you ever been pregnant?(1 for Yes || 0 for No) -----> ";
        cin>>pregnancy_validation;
        if (pregnancy_validation == 1) cout<<"We are sorry, you cannot participate in this competition";
        else if(pregnancy_validation == 0){
            cout<<"You can participate"<<endl;
            cout<<"How old are you madam? --- > : ";
            cin>>age;
            if(age<18) cout<<"You cannot participate in this program";
            else{
                cout<<"Age accepted"<<endl;
                cout<<"What is your height (figure value only) ? ------ >";
                cin>>height;
                if(height < 5) cout<<"You cannot participate in the competition";
                else{
                    cout<<"You can participate in this competition"<<endl;
                    cout<<"What is your weight ?  --->";
                    cin>>weight;
                    if(weight<50 && weight>62){
                        cout<<"You can only participate in the dancing and not in the running competition";
                    }
                    else{
                        cout<<"Successful validation"<<endl;
                        cout<<"You can participate in both dancing and running competiton";
                    }
                }
            }

        }
        else{
            cout<<"Invalid parameter inputed";}
                
                }


            }


    
