#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int>nums={1,2,3,4}; int flag=0;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        if(!mp.empty() && mp.count(nums[i])){
            cout<<"True";
            flag=1;
            break;
        }
        mp[nums[i]]=i;
    }
    if(flag==0)cout<<"False";
    return 0;
}