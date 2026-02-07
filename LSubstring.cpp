#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    string s="12345123"; int track1=0; int track2=0; int ans=0; unordered_map<char,int>mp;
    while(track2<s.size()){
        if(mp.count(s[track2])){
            ans=max(ans,track2-track1);
            while(s[track1]!=s[track2]){
                mp.erase(s[track1]);
                track1++;
            }
            mp.erase(s[track1]);
            track1++;
        }
        else{
            mp[s[track2]]=1;
            track2++;
        }
    }
    ans=max(ans,track2-track1);
    cout<<ans<<" ";
    return 0;
}