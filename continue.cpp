#include <iostream>
using namespace std;

int main()
{
	
for (int i = 10; i>= 1; i--)
{
	if (i%2 == 0)
	    {
	       continue; // if test is true, skip iteration and move 
		             //to the next round of iteration
 	    }
  //executes when iteration is not skipped i.e. if test is false
 	 cout<<"\nEven to display : "<<i<<" ";
}// end for statement
return 0;
}