#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={3,5,1}; int k=3;
    int left=0; int right=nums.size()-1; int flag=0;
    while(left<=right){
      int mid=(left+right)/2;
      if(nums[mid]==k){
        flag=1;
        break;
      }
      else if(nums[right]>=nums[mid]){
        //Right side sorted ha 
        if(k> nums[mid] && k<=nums[right])left=mid+1;
        else right=mid-1;
      }
      else{
        //left side sorted
        if(k>=nums[left] && k< nums[mid])right=mid-1;
        else left=mid+1;
      }
    }
    if(flag==1)cout<<"Yes exist..."<<endl;
    else cout<<"Not Exist..."<<endl;
    return 0;
}

