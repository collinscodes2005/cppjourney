#include<iostream>
using namespace std;

int a, b;
int enigma(int *x, int *y);
	int main()
	{
   		
   	  	a = 2;
   	    b = 7;
	    enigma(&a, &b);
	   	cout<<"\n"<<"results of a and b:" <<a <<","<<b;
   	   	return 0;
	}
	int enigma(int *x, int *y)
	{
		// Interpreting this section of code 
		// This section of the code is adding integer value of a and b together and the final result is that the value of integer a is equal to the value of integer b
   		 *y =  *y + b; //This can also be put as b = b + b; (b = 14)
   	 	*x = b + *x; // This can also be put as a = b + a;(a = 16)
   	 	b = *x + b; // This can also be put as b = a + b;(b = 30)
   	 	a = *y; // This can also be put as a = b;(30 = 30)
	}
