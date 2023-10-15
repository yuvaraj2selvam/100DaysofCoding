class Solution {
public: int ct=0;
    int numIdenticalPairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j] && i<j)
                ct++;
            }
        }
        return ct;
    }
};
