class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int res=0;
        for(int i:prices)
        {
            minprice=min(minprice,i);
            res=max(res,i-minprice);
        }
        return res;
    }
};