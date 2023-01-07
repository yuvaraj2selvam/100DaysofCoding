class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i]%nums.size();
            if(v[x]==0)v[x]=1;
            else return nums[i];
        }
        
        return 0;
    }
};
