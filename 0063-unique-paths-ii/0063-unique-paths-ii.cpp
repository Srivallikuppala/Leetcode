class Solution {
public:
    int unique(int i , int j , int n , int m , vector<vector<int>> g ,int c, vector<vector<int>>&dp) {
        if(g[i][j]==1) return 0;
        if(i==n-1 and j==m-1){
            c+=1;
            return c;
        }
        if(dp[i][j]!=-1) return dp[i][j];
    c = 0;
    if(i<n-1){
        c+=unique(i+1,j,n,m,g,c,dp);
        }
    if(j<m-1){
        c+=unique(i,j+1,n,m,g,c,dp);
    }
    dp[i][j]=c;
    return c;
}
    int uniquePathsWithObstacles(vector<vector<int>>& g){
        int n = g.size() , m = g[0].size();
        if(g[0][0]==1 or g[n-1][m-1]==1) return 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return unique(0,0,n,m,g,0,dp);
    }
};