class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums)m[x]++;
        for(auto x:m)if(x.second>=2)return 1;
        return 0;
    }
};
