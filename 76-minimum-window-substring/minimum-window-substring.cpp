class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : t) {
            mp[c]++;
        }
        
        int tc = t.size(), i = 0, j = 0, min_i = 0, minws = INT_MAX;
        
        while (j < s.size()) {
            if (mp[s[j]] > 0) {
                tc--;
            }
            mp[s[j]]--;
            
            while (tc == 0) {
                int w = j - i + 1;
                if (w < minws) {
                    minws = w;
                    min_i = i;
                }
                
                mp[s[i]]++;
                if (mp[s[i]] > 0) {
                    tc++;
                }
                i++;
            }
            j++;
        }
        
        return minws == INT_MAX ? "" : s.substr(min_i, minws);
    }
};
