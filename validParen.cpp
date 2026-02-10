#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s="]";
    stack<char>st;
    for(int i=0;i<s.size();i++){
       if(!st.empty() && (s[i]==')' && st.top()=='(' || s[i]==']' && st.top()=='[' || s[i]=='}' && st.top()=='{'))st.pop();
       else st.push(s[i]);
    }

    if(st.size()==0)cout<<"Yes VAlid"<<" ";
    else cout<<"Not valid"<<" ";
    return 0;
}