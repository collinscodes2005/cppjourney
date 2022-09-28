//Program to manipulate vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> sample; 
	sample.push_back(2); 
	sample.push_back(3); 
	sample.push_back(8);
	sample.push_back(9);
	
	for (int i = 0; i < sample.size(); i++){
		 cout << sample[i] <<" ";
	}	
	int seekVal;
	cout<<"\nEnter search value";
	cin>>seekVal;
   if(binary_search(sample.begin(), sample.end(), seekVal))
	{
		cout <<"\nElement found in vector: ";
	}
	else
	{
		cout <<"\nElement NOT found in vector: ";
	}
	return 0;
}