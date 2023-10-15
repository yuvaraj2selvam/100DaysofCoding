class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=height[0];
        int h=height[n-1];
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
                l=max(l,height[i]);
                a[i]=l;
        }
         for(int i=n-1;i>=0;i--)
        {
                h=max(h,height[i]);
                b[i]=h;
        }
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
             sum+=min(a[i],b[i])-height[i];
        }
     return sum;   
    }
};
