class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size(),z=0;
        vector<int>v;
        for(int i=1;i<n;i++)
            if(nums[i]==nums[i-1])
               { 
                nums[i-1]*=2;
                nums[i]=0;}
        
      for(auto x:nums){
            if(x==0)z++;
            else v.push_back(x);}
        
        while(z--)v.push_back(0);
        
     return v;   
    }
};
