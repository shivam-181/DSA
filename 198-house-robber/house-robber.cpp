class Solution {
public:
    int count(vector<int> &nums,int i,vector<int> &dp)
    {
        if(i<0)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=max(nums[i]+count(nums,i-2,dp),count(nums,i-1,dp));
    }
    int rob(vector<int>& nums) {
        int i=nums.size()-1;
        vector<int> dp(nums.size()+1,-1);
        return count(nums,i,dp);
    }   
};