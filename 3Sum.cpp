#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-1,0,1,2,-1,-4}; 
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        int j=i+1; int k=nums.size()-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
               while(j < k && nums[j] == nums[j-1]) j++;
               while(j < k && nums[k] == nums[k+1]) k--;
            }
            else if(nums[i]+nums[j]+nums[k]>0)k--;
            else if(nums[i]+nums[j]+nums[k]<0)j++;
        }
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}