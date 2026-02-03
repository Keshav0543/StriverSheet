#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool IsSearch(vector<vector<char>>&board,int k,int n, int index,string word);
int main(){
    vector<vector<char>>board={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCCED"; int flag=0;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            bool ans;
            if(board[i][j]==word[0]){
                ans=IsSearch(board,i,j,0,word);
            }
            if(ans==true)flag=1;
        }
        if(flag==1){
            cout<<"Yes Exist"<<endl;
            break;
        }
    }

    if(flag==0)cout<<"Not Exist"<<endl;
    return 0;
}

bool IsSearch(vector<vector<char>>&board,int k,int n, int index,string word){
    //BAse cases
    if(index==word.size())return true;
    if(k<0 || k>=board.size() || n<0 || n>=board[0].size() || board[k][n]=='$')return false;
    if(board[k][n]!=word[index])return false;
    char temp=board[k][n];
    board[k][n]='$';
    //Hypothesis
    bool found=IsSearch(board,k-1,n,index+1,word)||
    IsSearch(board,k+1,n,index+1,word)||
    IsSearch(board,k,n-1,index+1,word)||
    IsSearch(board,k,n+1,index+1,word);

    //induction
    board[k][n]=temp;
    return found;
}








