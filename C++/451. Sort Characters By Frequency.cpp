static bool isort(pair<int,char>a,pair<int,char>b){ 
        return a.first < b.first;
    }   
class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v;
        map<char,int>m;
        for(auto x:s)m[x]++;
        for(auto x:m)v.push_back({x.second,x.first});
        sort(v.rbegin(),v.rend(),isort);
        string ans = "";
        for(int i = 0; i < v.size(); i++){
        int t = v[i].first;ans+=string(t,v[i].second);
      }
      return ans;
    }
};
