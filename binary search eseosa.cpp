// preprocessor - import libraries
#include<iostream>

// namespace
using namespace std;

int binarySearch(int array[], int size, int value)
{
	int first = 0;             // First array element
	int last = size - 1;       // Last array element       
	int middle;               // Mid point of search      
	int position = -1;         // Position of search value   
	bool found = false;        // Flag   
	while (!found && first <= last)
	{
		middle = (first + last) / 2;     // Calculate mid point
		if (array[middle] == value)  // If value is found at mid
		{
			found = true;        
			position = middle;      
		}      
		else if (array[middle] > value)  // If value is in lower half
		{
			last = middle - 1;
		} 
		else 
		{
			first = middle + 1; // If value is in upper half   
		}
	}
	return position;
} 

int main(){
	int list [] = {1, 3, 5, 2, 7, 9, 4, 6};
	
	int search = 2;
	int answer = binarySearch(list, 8, search);
	
	cout << "the position of " << search << " is " << answer;
}

