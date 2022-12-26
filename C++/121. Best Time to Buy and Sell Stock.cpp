class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=INT_MAX,ans=INT_MIN;
        sum=prices[0];
        for(int i=0;i<prices.size()-1;i++)
        {
            sum=min(sum,prices[i]);
            ans=max(ans,prices[i+1]-sum);
        }
        if(ans<0)return 0;
        return ans;
    }
};
