class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=1;i<n;i++)
            {
            if(nums[i]==nums[i-1])
               { 
                nums[i-1]*=2;
                nums[i]=0;
                
               }
            


        }
        
        int z=0;
        for(auto x:nums){
            if(x==0)z++;
            else v.push_back(x);
        }
        
        while(z--)
            v.push_back(0);
        
     return v;   
    }
};
