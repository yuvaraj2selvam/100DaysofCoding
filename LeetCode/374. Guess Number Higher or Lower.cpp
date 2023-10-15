/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
     
        int a=guess(n);
     
        if(a==1)return guessNumber(n=n-1);
        if(a==-1)return guessNumber(n=n-1);    
        
        return n;
    }
};
