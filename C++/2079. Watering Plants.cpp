class Solution {
public:
    int wateringPlants(vector<int>& plt, int capacity) {
        int c=capacity;
        int step=0;
        for(int i=0;i<plt.size();i++)
        {
            if(c-plt[i]<0)
            {   
                step+=i*2;
                c=capacity;
            }
            if(c-plt[i]>=0)
            {
                step++;
                c-=plt[i];
            }
        }
        return step;
    }
};
