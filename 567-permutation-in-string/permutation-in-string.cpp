class Solution {
public:
    bool checkInclusion(string code, string letter) {
         unordered_map<char, int> mp;
    for (char c : code) mp[c]++;
    
    int count = mp.size(), k = code.length();
    int i = 0, j = 0;
    
    while (j < letter.length()) 
    {
        if (mp.find(letter[j]) != mp.end()) 
        {
            mp[letter[j]]--;
            if (mp[letter[j]] == 0) count--;
        }
        
        if (j - i + 1 < k) j++;
        else if (j - i + 1 == k) 
        {
            if (count == 0) return true;
            
            if (mp.find(letter[i]) != mp.end()) 
            {
                if (mp[letter[i]] == 0) count++;
                mp[letter[i]]++;
            }
            i++;
            j++;
        }
    }
    
    return false;
    }
};