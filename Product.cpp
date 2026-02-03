#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={-1,1,0,-3,3}; 
    vector<int>prefix; vector<int>suffix(nums.size(),-1);
    prefix.push_back(1);
    suffix[nums.size()-1]=1;
    for(int i=1;i<nums.size();i++){
        prefix.push_back(nums[i-1]*prefix[i-1]);
    }

    for(int i=nums.size()-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<suffix.size();i++){
        nums[i]=prefix[i]*suffix[i];
    }

    for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
    return 0;
}