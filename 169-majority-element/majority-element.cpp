class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        int ans;
        unordered_map<int,int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>(n/2))
            {
                return i.first;
            }
        }
        return -1;
    }
};