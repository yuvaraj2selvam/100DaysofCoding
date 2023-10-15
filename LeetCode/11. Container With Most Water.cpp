class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int sum=-1;
     while(i<j)
     {
        int x=min(height[i],height[j]);
        int g=j-i;
        g*=x;
        sum=max(sum,g); 
        if(height[i]>=height[j])
            j--;
         else
             i++; 
     }
    return sum;      
    }
};
