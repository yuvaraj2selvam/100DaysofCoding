class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   
            sum+=nums[i];
            m=max(m,sum);
            if(sum<0)sum=0;
        }
        cout<<m;
        return m;
    }
};
