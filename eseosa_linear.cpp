//Program to manipulate vector
#include <iostream>
using namespace std;

int main()
{

	int A[] = {13,5,1,7,10};
	

	cout <<"\narray Element: ";

	for (int i = 0; i < 5; i++){
		 cout << A[i] <<" ";
	}

	int searchVal, i;
	cout<<"\nEnter the search val";
	cin>>searchVal;
	for(i = 0; i<5; ++i)
	{
		if(searchVal==A[i])
		{
			cout<<"\nElement: "<<searchVal<< "\nfound at index:"<<i;
			break;
		}
	}
	cout<<"\nfinal index:"<<i;
	if (i==5) cout<<"\nElement NOT found:";

return 0;
}