#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={-1, -2, -3}; 
    int maxii=INT_MIN; int temp=1;
    //for zero 
    for(int i=0;i<nums.size();i++){
        temp=temp*nums[i];
        maxii=max(maxii,temp);
        if(temp==0)temp=1;
    }

    //for negative cases
    temp=1;
    for(int i=nums.size()-1;i>=0;i--){
        temp=temp*nums[i];
        maxii=max(maxii,temp);
        if(temp==0)temp=1;
    }
    cout<<maxii;
    return 0;
}