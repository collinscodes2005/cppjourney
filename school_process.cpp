#include <iostream>
#include<typeinfo>

using namespace std;


int main(){
    //code for school addmission registration process
    string first_name;
    string second_name;
    int age;
    int jamb_score;
    string truet = "string";



    // getting the name of the student that wants to do the registration

    cout << "Kindly input your first name to proceed with registration" << endl;
    cin >> first_name;
    cout << "Kindly input your second name to proceed with registration : " << endl;
    cin >> second_name;

    cout << "Data updated sucessfully" <<endl;
    //Getting user age for confirmation and validation

    cout<<"How old are you ? "<<endl;
    cin>>age;
    
    //age validation code 
    if (age<15)
        cout<<"Sorry, Youre younger than the required age and cannot complete this registration"<<endl;
    else if(age>19)
        cout<<"Sorry, youre above the required age for this degree, Please apply for a higher diploma"<<endl;
    else
         cout<<"Valid age inputed, please continue your registration"<<endl;

    //Getting Jamb score of applicant 
    cout<<"Input your JAMB score"<<endl;
    cin>>jamb_score;

    if(jamb_score<210)
       cout<<"Im sorry, Your score is too low!!"<<endl;
    else if(jamb_score<=400)
       cout<<"Your application has been accepted and will be processed"<<endl;
    else
       cout<<"Your inputed score is invalid"<<endl;
    
    if(typeid(first_name).name() == truet)
        cout<<"The name is a string"<<endl;
        








}