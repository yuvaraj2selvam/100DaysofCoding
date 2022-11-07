class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i = 0, j = 0, n = s.size(),ans=0 ;
        unordered_set<int> set;
        
        while(i<n)
        {
            if(set.count(s[i])==0)
            {
                set.insert(s[i]);
                ans=max(ans,i-j+1);
                i++;
            }
            else
            {
                set.erase(s[j]);
                j++;
            }
        }
        
        return ans;
        
    }
};
