#include <iostream>
using namespace std;
int main(){
    int a=11; 
    int count=0;
    while(a>0){
        int rem=a%2;
        if(rem==1)count++;
        a=a/2;
    }
    cout<<count<<" ";
    return 0;
}