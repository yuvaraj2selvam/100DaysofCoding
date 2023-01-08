class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=-1;
        int x=1;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=1;i<n;i++)
        {  
            if(nums[i-1]==nums[i] && nums[i-1]==1)
                x++;
            else 
                x=1;
            if(nums[i]+nums[i-1]>=1)
            ans=max(x,ans);
        }
        if(ans==-1)return 0;
        return ans;
    }
};
