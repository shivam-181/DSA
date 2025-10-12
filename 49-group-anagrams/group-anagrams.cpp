class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto it:strs)
        {
            string i=it;
            sort(it.begin(),it.end());
            mp[it].push_back(i);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};