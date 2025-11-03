class Solution {
public:
    int fxn(int n,vector<int> &dp)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1)
        return dp[n];
       int ans= fxn(n-1,dp)+fxn(n-2,dp);
       return dp[n]=ans;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return fxn(n,dp);
    }
};