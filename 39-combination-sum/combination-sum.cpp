class Solution {
public:
    void fxn(vector<int>& candidates, int target, vector<int> &curr,vector<vector<int>> &ans,int index)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        if(index==candidates.size()||target<0)
        return;
        curr.push_back(candidates[index]);
        fxn(candidates,target-candidates[index],curr,ans,index);
        curr.pop_back();
        fxn(candidates,target,curr,ans,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> ans;
        fxn(candidates,target,curr,ans,0);
        return ans;
    }
};