class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        int p=0,n=0;
        for(auto x:nums)
        {
            n=log10(x)+1;
            p=pow(10,n-1);
            while(n--)
            {   int d=x/p;
                v.push_back(d%10);
                p/=10;    
            }
        }
        return v;
    }
    
};
