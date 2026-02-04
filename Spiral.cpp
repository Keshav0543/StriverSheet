#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>spiral={{1,2,3,4}};
    int row_max=spiral.size()-1; int col_max=spiral[0].size()-1; int default_i=0; int defaultj=0; int size=spiral.size()*spiral[0].size();
    vector<int>ans; 
    while(ans.size()<size){
        //MOve right side
        int i=default_i; int j=defaultj;
        while(j<=col_max){
            ans.push_back(spiral[i][j]);
            j++;
        }

        //Move down side
        i=i+1; j=col_max;
        while(i<=row_max){
            ans.push_back(spiral[i][j]);
            i++;
        }

        // Move Left
    if(default_i < row_max){
        i = row_max;
        j = col_max - 1;
        while(j >= defaultj){
            ans.push_back(spiral[i][j]);
            j--;
        }
    }

    // Move Up
    if(defaultj < col_max){
        i = row_max - 1;
        j = defaultj;
        while(i >= default_i + 1){
            ans.push_back(spiral[i][j]);
            i--;
        }
    }

      
        //Now main handling part
        default_i++; defaultj++;
        row_max--; col_max--;
    }

    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}