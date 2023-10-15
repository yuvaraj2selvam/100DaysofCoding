class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int totSum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            totSum+=nums[i];
        }
        vector<long long int>Rightsum(n+1,0);
        Rightsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            Rightsum[i]+=(nums[i]+Rightsum[i+1]);
        }
        long long int ans=0,minVal=INT_MAX;
        for(int i=0;i<n;i++){
            
            int temp=abs((totSum-Rightsum[i+1])/(i+1) - Rightsum[i+1]/((n-i-1)<1?1:(n-i-1)));
          
            if(temp<minVal){
               minVal=temp;
               ans=i;
            }
        }
        return ans;
    }
};
