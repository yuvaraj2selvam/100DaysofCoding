class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        
        unordered_set<char>set;
        int i=0,f=0;
        int ans=-1;
        while(i<s.size())
        {
            if(set.find(s[i])==set.end())
            {
                set.insert(s[i]);
                ans=max(ans,i-f+1);
                i++;
            }
            else
             set.erase(s[f++]);
        }
        
        return ans;
    }
};
