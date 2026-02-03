#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    vector<int>nums={100, 200, 300, 10, 20, 30, 40}; 
    int miin=INT_MAX;
    int left=0; int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]<nums[right]){
            miin=min(miin,nums[mid]);
            right=mid-1;
        }
        else{
            miin=min(miin,nums[mid]);
            left=mid+1;
        }
    }
    cout<<miin<<" ";
    return 0;
}