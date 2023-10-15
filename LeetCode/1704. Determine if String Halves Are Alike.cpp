class Solution {
public:
    bool halvesAreAlike(string s) {
    int n=s.size();
    int a=0,b=0;
    for(int i=0;i<n;i++)
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    { if(i<n/2) a++;
        else b++;
    }      
        if(a==b)return 1;return 0;
     }
};
