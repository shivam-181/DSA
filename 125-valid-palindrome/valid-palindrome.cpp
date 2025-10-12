class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char ch : s) {
            if (isalnum(ch))
                filtered += tolower(ch);
        }
        string s2 = filtered;
        reverse(s2.begin(), s2.end());
       return filtered==s2;
    }
};