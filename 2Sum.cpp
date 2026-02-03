#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    vector<int>nums{3,2,4}; int target=6;
    int temp=target;
    unordered_map<int,int>mp; int firstInd=-1, SecondInd=-1;
    for(int i=0;i<nums.size();i++){
        temp=temp-nums[i];
        if(!mp.empty() && mp.count(temp)){
            firstInd=mp[temp];
            SecondInd=i;
            break;
        }
        mp[nums[i]]=i;
        temp=target;
    }

    cout<<firstInd<<" "<<SecondInd<<endl;
    return 0;
}