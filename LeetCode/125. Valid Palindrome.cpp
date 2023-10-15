class Solution {
public:
    bool isPalindrome(string s) {
     
        string n="";
        for(int i=0;i<s.size();i++)
            if(s[i]>='a' && s[i]<='z'||s[i]>='A' && s[i]<='Z'||s[i]>='0' && s[i]<='9')
            n+=s[i];
        
        transform(n.begin(),n.end(),n.begin(),::tolower);   
        //cout<<n; 
        string a=n;
         reverse(n.begin(),n.end());
        if(a==n)
            return true;
        return false; 
    }
};
