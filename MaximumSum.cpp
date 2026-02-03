#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    vector<int>nums={-2, -3, -7, -2, -10, -4}; 
    int maxii=INT_MIN;
    int temp=0;
    for(int i=0;i<nums.size();i++){
        temp+=nums[i];
        maxii=max(maxii,temp);
        if(temp<0)temp=0;
    }
    cout<<maxii<<" ";
    return 0;
}