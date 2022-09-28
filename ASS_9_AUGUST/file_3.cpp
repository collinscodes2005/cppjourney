//adding 5 using pointer
#include <iostream>

using namespace std;
int addingFive(int *ptra)
 {
     *ptra = *ptra + 5;//this line adds 5 to the initial value 
     return *ptra;

 }
int main()
{
    int a;
    int addingFive(int *ptra);
    a=5;
    cout<<"Value of the function before adding: "<<a<<endl;
    cout<<"Value of the function after adding: "<<addingFive(&a)<<endl;
    cout<<"Final value of function: "<<a<<endl;
    return 0;
}
