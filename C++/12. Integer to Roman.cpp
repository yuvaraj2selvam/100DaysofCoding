class Solution {
public:
    string intToRoman(int num) {
        
        int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string key[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        for(int i=0;num!=0;i++)
        {
            while(num>=val[i])
            {
                ans+=key[i];
                num-=val[i];
            }
        }
        return ans;
    }
};
