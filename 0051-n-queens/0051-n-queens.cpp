class Solution {
public:
    bool valid(int i , int j , vector<string> &res){
        int row = i;
        int col = j;
        while(row){
            row--;
            if(res[row][col]=='Q') return false;
        };
        row = i;
        while(row and col){
            row--;
            col--;
            if(res[row][col]=='Q') return false;
        };
        row = i;
        col = j;
        while(row and col<res.size()){
            row--;
            col++;
            if(res[row][col]=='Q')return false;
        }
        return true;
    }
    void queen(int row , int n , vector<string>&res , vector<vector<string>>&ans){
        if(row == n){
            ans.push_back(res);
            return ;
        }
        for(int i = 0 ; i < n ; i++){
            if(valid(row , i , res)){
                res[row][i]='Q';
                queen(row+1,n,res,ans);
                res[row][i]='.';
            }
        }
        return ;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> res(n);
        string s(n,'.');
        for(int i = 0 ; i < n ; i++){
            res[i] = s;
        }
       queen(0 , n , res,ans);
        return ans;
    }
 };
