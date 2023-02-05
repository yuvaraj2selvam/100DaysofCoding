class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      
        for(int i=0;i<nums.size();i++)if(nums[i]<0)nums[i]=0;
        int count=0;
        sort(nums.begin(),nums.end());
        for(auto x:nums)
        {
            if(x==1)
            { count=1;
              break;
            }
        }
        if(!count)return 1;
        
         for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]>1)
            {
                return (nums[i]+1);
            }
        }
       return nums[nums.size()-1]+1;
          
    }
};
