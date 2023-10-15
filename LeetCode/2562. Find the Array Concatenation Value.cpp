class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int>v;
        while(i<j)
        {
            int a=log10(nums[i])+1;
            int b=log10(nums[j])+1;
            int p=pow(10,b);
            int k=nums[i]*p+nums[j];
            v.push_back(k);
            i++,j--;
        }
        long long int ans=0;
        if(nums.size()%2==1)v.push_back(nums[i]);
        for(auto x:v)ans+=x;
        return ans;
        
    }
};
