#include <iostream>
using namespace std;
int main(){
    int x=333;
        int temp=x; int ans=0;
        while(temp>0){
           int store=temp%10;
            ans=(ans*10)+store;
            temp=temp/10;
    }
    if(ans==x)cout<<"Yes given Number is an palindrome"<<" ";
    else cout<<"NO Number is Not a Plaindrome..."<<" ";
    return 0;
}