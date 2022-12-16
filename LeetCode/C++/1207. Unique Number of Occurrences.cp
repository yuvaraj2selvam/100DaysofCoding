class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        vector<int>::iterator it;
        //long long int count=0;
        for(auto x:arr)m[x]++;
        arr.clear();
        for(auto x:m)
        {
            it=find(arr.begin(),arr.end(),x.second);
            if(it!=arr.end())return 0;
            else arr.push_back(x.second);
        }
        return 1;
    }
};
