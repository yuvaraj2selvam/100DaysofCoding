
class Solution {
public:
    bool isPalindrome(int x) {
        long long int a=x,b,c=0;
        while(a!=0)
    {
        b=a%10;
        c=(c*10)+b;
        
        a/=10;
    }
    if(x!=c ||x<0) return false;
    else return true;    
    }
};
