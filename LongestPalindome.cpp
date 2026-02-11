#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string find(int left,int right,string s,string ans);
int main(){
    string s="abccbax";  int ind=0; string ans="";
    while(ind<s.size()){
        //First for odd number
        ans=find(ind,ind,s,ans);
        //second for even number
        ans=find(ind,ind+1,s,ans);
        ind++;
    }
    cout<<ans<<" ";
    return 0;
}

string find(int left,int right,string s,string ans){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        if((right-left)+1>ans.size()){
            ans="";
            for(int i=left;i<=right;i++)ans+=s[i];
        }
        left--;
        right++;
    }
    return ans;
}