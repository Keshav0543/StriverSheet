#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={9,6,4,2,3,5,7,0,1}; 
    int n=nums.size(); int count1=0; int count2=0;
    for(int i=0;i<=n;i++){
        if(i<=n-1){
            count1+=nums[i];
        }
        count2+=i;
    }

    cout<<count2-count1<<" ";
    return 0;
}