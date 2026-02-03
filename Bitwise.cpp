#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    int a=10; int b=15;
    
    while(b!=0){
        int sum=a^b;
        b=(a&b)<<1;
        a=sum;
    }

    cout<<a<<" ";
    return 0;
}