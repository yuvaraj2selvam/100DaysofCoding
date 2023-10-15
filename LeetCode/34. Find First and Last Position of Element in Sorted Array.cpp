class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        int s=-1,e=-1,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && c==0)
            {    s=i;c=1;}
            else if(nums[i]==target )
                e=i;
        }
        if(s!=-1 && e==-1)
            e=s;
        else if(s==-1 && e!=-1)
            s=e;
            
        return {s,e};
    }
};
