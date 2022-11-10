class Solution {
public:
    string removeDuplicates(string a) {
        int n=a.size();
        string ans="";
        stack<char>s;
        for(int i=0;i<n;i++)
        {    
            if(s.empty() ||s.top()!=a[i])
             s.push(a[i]);
            else 
                s.pop();
        }
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
