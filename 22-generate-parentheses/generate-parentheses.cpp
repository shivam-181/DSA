class Solution {
public:
    vector<string> valid;
    void gen(string &s,int open ,int close )
    {   
        if(close==0&&open==0)
        {
            valid.push_back(s);
        }
        if(open>0)
        {
            s.push_back('(');
            gen(s,open-1,close);
            s.pop_back();
        }
        if(close>0)
        {
            if(open<close)
            {
                s.push_back(')');
                gen(s,open,close-1);
                s.pop_back();
            }
        }

    }
    vector<string> generateParenthesis(int n) {
        string s;
        gen(s,n,n);
        return valid;
    }
};