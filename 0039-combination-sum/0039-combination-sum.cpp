class Solution {
public:
    void combination(int idx , vector<int>c , int k , vector<vector<int>>&vct , int n , vector<int>&vec){
        if(idx==n){
            if(k==0){
                vct.push_back(vec);
            }
            return;
        }
        if(c[idx]<=k){
            vec.push_back(c[idx]);
            combination(idx,c,k-c[idx],vct,n,vec);
            vec.pop_back();
        }
        combination(idx+1,c,k,vct,n,vec);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>vct;
        vector<int>vec;
        combination(0, c , t , vct , c.size(),vec);
        return vct;
    }
};