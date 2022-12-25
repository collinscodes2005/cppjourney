#include<iostream>
#include<vector>
using namespace std;
int main(){

    //vector storing ages of 50 students 
    vector<int> student_ages;
    int vector_appender;
    //code to dynamically input the ages of students into the vector 
    //set index
   //iteration to run 50 times ---> allowiing the dynamic input of 50 scores 
    for(int index = 0; index<50; index++){
        cout<<"please input the age for student "<<index + 1<<endl;
        cin>>vector_appender;
        student_ages.push_back(vector_appender);
    }

    //code to print out all the ages of students 
    for(int index = 0; index< 50; index++){
        cout<<"the age of student "<<index + 1<<" is "<<student_ages[index]<<endl;
    }

    //this code deletes the last 5 ages in the vector
    for (int val = 0; val<= 5; val++){

        student_ages.pop_back();
    };
    ///////////////////////////////////////
    ///////////////Second block////////////

    //code to print out the vector list --> after deletion 
    for(int index = 0; index< 45; index++){
        cout<<"the age of student "<<index + 1<<" is "<<student_ages[index]<<endl;
    };

    //This code prints the size of the vector -> 
    cout<<"\n\n\n\n\nThe size of the vector now is " <<student_ages.size();


    //This codes prints out te caopacity of ther vector -->
    cout<<"\n\n\n The Capacity of the vector now is "<<student_ages.capacity()<<endl;
}
