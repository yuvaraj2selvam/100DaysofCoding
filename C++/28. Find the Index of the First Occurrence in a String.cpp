class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.size()>haystack.size())return -1;
        int c=-1;
        int j=0;
        for(int i=0;i<haystack.size();i++)
        {   j=0;
            int p=i;
            while(haystack[p]==needle[j] && p<haystack.size() && j<needle.size())
            {   
                if(j==needle.size()-1)
                {
                    c=i;
                    return c;
                }
                p++;
                j++;
            }
        }
       return c; 
    }
};
