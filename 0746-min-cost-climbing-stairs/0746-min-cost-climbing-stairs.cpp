class Solution {
public:
    int climb(vector<int>cost,int i , int n , vector<int>&Arr,int mini){
        if(i>=n)return mini;
        if(Arr[i]!=-1)return Arr[i];
        mini = cost[i]+min(climb(cost,i+1,n,Arr,mini),climb(cost,i+2,n,Arr,mini));
        Arr[i] = mini;
        return mini;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>arr(n,-1);
        int mini = climb(cost,0,n,arr,0);
        return min(arr[0],arr[1]);   
    }
};