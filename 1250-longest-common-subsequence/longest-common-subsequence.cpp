class Solution {
public:
    int lcs(string &s1,int n,string &s2,int m,vector<vector<int>> &dp)
    {
        if(n==0||m==0)
        return 0;
        if(dp[n][m]!=-1)
        return dp[n][m];
        if(s1[n-1]==s2[m-1])
        return dp[n][m]=1+lcs(s1,n-1,s2,m-1,dp);
        return dp[n][m]=max(lcs(s1,n-1,s2,m,dp),lcs(s1,n,s2,m-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return lcs(text1,n,text2,m,dp);
    }
};