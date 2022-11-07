int a[31];

int fibb(int n)
{
    if(n==1 || n==2)return 1;
    if(n==0)return 0;
    
    if(a[n]!=0)
        return a[n];
    else 
        a[n]=fibb(n-1)+fibb(n-2);
        return a[n];
}
class Solution {
public:
    int fib(int n) {
      return  fibb(n);     
    }
};
