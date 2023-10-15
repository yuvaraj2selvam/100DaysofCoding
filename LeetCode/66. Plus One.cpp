class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size();n--;
      
        if(digits[n]<9)
        {
            digits[n]+=1;return digits;
        }
        if(n+1==1 && digits[n]==9)return {1,0};
        while(digits[n]>=9)
        {   
            digits[n--]=0;
            if(n==0 && digits[n]>=9)
            {
                digits[0]=0;
                digits.insert(digits.begin(),1);
                return digits;
            }
            digits[n]+=1;
            if(digits[n]<=9)return digits;
            
        }
        return digits;
        
    }
};
