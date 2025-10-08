class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(char c:s)
        {
            if(isalnum(c))
            filtered+=tolower(c);
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