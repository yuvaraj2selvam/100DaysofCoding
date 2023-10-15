class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0,y=0;
        for(auto x:costs)
        {
            if(x<=coins)
            {
                ans++;
                coins-=x;
            }
            else y++;
        } 
        if(y==costs.size())return 0;
        return ans;
    }
    

};
