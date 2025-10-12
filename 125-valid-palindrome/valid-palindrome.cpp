class Solution {
public:
    bool isPalindrome(string s) {
        string filtered="";
        for(char ch:s)
        {
            if(isalnum(ch))
            filtered+=tolower(ch);
        }
        int st=0;
        int e=filtered.length()-1;
        while(st<=e)
        {
            if(filtered[st]!=filtered[e])
            return false;
            st++;
            e--;
        }
        return true;

    }
};