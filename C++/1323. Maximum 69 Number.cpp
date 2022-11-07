class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        
        while(num>0)
            {
            int t=num%10;
            num/=10;
            v.push_back(t);
        }
        reverse(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++)
            if(v[i]==6)
             {   
                v[i]=9;
                 break;
              }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=ans*10+v[i];
        
        return ans;
            
    }
};
