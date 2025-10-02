class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones=0;
        int maxones=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {ones++;
            maxones=max(ones,maxones);
            }
            else
            ones=0;
        }
        return maxones;
    }
};