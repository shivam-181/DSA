class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.empty() || k == 0) return {};

        unordered_map<int,int> mp;
        for (auto num : nums) mp[num]++;

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& [num, freq] : mp) bucket[freq].push_back(num);

        vector<int> res;
        for (int i = bucket.size() - 1; i > 0 && res.size() < k; --i) {
            for (int num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) break;
            }
        }
        return res;
    }
};