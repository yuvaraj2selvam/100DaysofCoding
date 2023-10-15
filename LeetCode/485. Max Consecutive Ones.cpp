class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int ans=0,c=0;
          
        for(auto x:nums)
        {
            if(x==1)
            c+=x;
            else
            c=0;
            ans=max(ans,c);
        }
        return ans;
    }
};
