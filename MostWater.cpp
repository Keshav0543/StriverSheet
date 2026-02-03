#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={1, 100, 1, 1, 100, 1};
    int left=0; int right=nums.size()-1; int ans=0;
    while(left<right){
        int width=(right-left);
        int height=min(nums[left],nums[right]);
        int temp=width*height;
        ans=max(temp,ans);
        if(nums[left]<nums[right])left++;
        else right--;
    }
    cout<<ans<<" ";
    return 0;
}