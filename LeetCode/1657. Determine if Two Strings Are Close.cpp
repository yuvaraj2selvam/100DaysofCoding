class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return 0;
        vector<int>v1,v2;string s1,s2;
        map<char,int>m,n;
        for(auto x:word1)m[x]++;for(auto x:word2)n[x]++;
        for(auto x:m){v1.push_back(x.second);s1+=x.first;}
        for(auto x:n){v2.push_back(x.second);s2+=x.first;}
          if(s1!=s2)return 0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {    cout<<v1[i]<<" "<<v2[i]<<endl;
            if(v1[i]!=v2[i])return 0;
        }
        return 1;
    }
};
