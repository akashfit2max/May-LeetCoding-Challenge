class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.size())return "0";
        stack < char >  s;
        int i=0, n=num.size();
        while(i < n)
        {
            while( !s.empty() && k > 0 &&s.top()>num[i])
            {
                s.pop();
                k--;
            }
            s.push(num[i]);
            i++;
        }
        while(k>0)
        {
            s.pop();
            k--;
        }
        string ans="";
        while(!s.empty())
        {
            ans=s.top()+ans;
            s.pop();
        }
        while(ans.size()>1&&ans[0]=='0')
            ans.erase(0,1);
        return ans;
    }
};
