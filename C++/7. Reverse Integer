class Solution {
public:
    int reverse(int x) {
        long long int ans=0;
        while(x!=0)
        {
            ans=x%10+(10*ans);
            x/=10;
        }
        if(ans<INT_MIN||ans>INT_MAX)
           return 0;
        
        return ans;       
    }
};
