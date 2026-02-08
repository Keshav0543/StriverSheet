#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    vector<string>str={"eat","tea","tan","ate","nat","bat"}; vector<string>str1=str; vector<vector<string>>ans;
    for(int i=0;i<str.size();i++)sort(str1[i].begin(),str1[i].end());
    unordered_map<string,vector<string>>mp;
    
    for(int i=0;i<str1.size();i++){
        mp[str1[i]].push_back(str[i]);
    }    

    for(auto it=mp.begin();it!=mp.end();it++){
        ans.push_back(it->second);
        // for(string content: it->second)ans.push_back(content);
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}