#include <iostream>
using namespace std;

//importing the string library 
#include <string>

void addFunction(){


}

int main(){
   
   string name = "Ikotun";
   string last_name = "Collins";
   
   string secondName = "Adebayo ";
   string secondFirstName = "Folulope";
   //concatenation of strings in c++
   string fullName = name +" " + last_name;

   string second_fullname = secondName.append(secondFirstName);
   //checking length of strings in c++
   int length = fullName.length();


   //getting indexes with square brackets
   char element = fullName[3];

   cout<<fullName + " " + secondName + element<<endl;


   cout<<length;
   


}