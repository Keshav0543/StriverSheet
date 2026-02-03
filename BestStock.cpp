#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector<int>nums={7,1,5,3,6,4}; 
    int MaxP=0;
    int hold=nums[0];
    for(int i=1;i<nums.size();i++){
        int profit=nums[i]-hold;
        MaxP=max(MaxP,profit);
        if(hold>nums[i])hold=nums[i];
    }
    cout<<MaxP<<" ";
    return 0;
}