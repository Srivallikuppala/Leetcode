class Solution {
public:
    int unique(int i , int j , int n , int m , vector<vector<int>> g ,vector<vector<int>>&dp) {
        if(g[i][j]==1) return 0;
        if(i==n-1 and j==m-1){
            return 1;
        }
    if(dp[i][j]!=-1) return dp[i][j];
    int k=0;
    if(i<n-1)k+=unique(i+1,j,n,m,g,dp);
    if(j<m-1)k+=unique(i,j+1,n,m,g,dp);
    return dp[i][j]=k;
}
    int uniquePathsWithObstacles(vector<vector<int>>& g){
        int n = g.size() , m = g[0].size();
        if(g[0][0]==1 or g[n-1][m-1]==1) return 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return unique(0,0,n,m,g,dp);
    }
};