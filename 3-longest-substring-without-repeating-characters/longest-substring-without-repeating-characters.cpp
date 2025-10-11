class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int j=0;
        int i=0;
        int ans=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            while(mp[s[j]]>1)
            {
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};