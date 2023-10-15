class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        set<vector<int>>s;
        while(i<n)
        {
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                        
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            }
            i++;
        }
        vector<vector<int>>v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        
        return v;
    }
};
