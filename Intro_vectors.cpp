#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1 = {1, 2, 3, 4};
    cout << "Initial Vector : ";
    for(int i = 0; i< vec1.size(); i++){
        cout<< vec1[i] << "  ";
    

    }
    cout<<" \n";
    vec1.push_back(4);
    cout<<"The size of the vector is: "<<vec1.size()<<"\n";
    cout<<"The capacity of the vector is: "<<vec1.capacity();

    
}
