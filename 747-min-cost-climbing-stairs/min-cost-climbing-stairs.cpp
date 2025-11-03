class Solution {
public:
    int fun(int n,vector<int>& cost,vector<int> &dp)
    {
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        if(dp[n]!=-1)
        return dp[n];
        
        int ans=fun(n-1,cost,dp);
        ans=min(ans,fun(n-2,cost,dp))+cost[n];
        return dp[n]=ans;
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return min(fun(cost.size()-1,cost,dp),fun(cost.size()-2,cost,dp));
    }
};