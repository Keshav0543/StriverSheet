#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="rat"; string t="car";
    if(s.size()!=t.size()){
        cout<<"This is not an Anagram>.."<<" ";
    }

    else {
    sort(s.begin(),s.end()); sort(t.begin(),t.end());
    if(s==t)cout<<"Yeah! This Is An Anagram..."<<" ";
    else cout<<"No! This IS Not An Anagram..."<<" ";
    }
    return 0;
}