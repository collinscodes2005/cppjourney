#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int score[6] = {9,6,8,5,4,6};
    bool result;
    

    sort(score, score+5);

    result = binary_search(score, score+5, 5);

    cout<<result;


}
