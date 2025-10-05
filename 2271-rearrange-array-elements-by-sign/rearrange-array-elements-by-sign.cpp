class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0;
        int j = 1;

        int n = nums.size();
        vector<int> res(n);
        for (int k = 0; k < n; k++) {
            if (nums[k] > 0) {
                res[i] = nums[k];
                i += 2;
            } else {
                res[j] = nums[k];
                j += 2;
            }
        }
        return res;
    }
};