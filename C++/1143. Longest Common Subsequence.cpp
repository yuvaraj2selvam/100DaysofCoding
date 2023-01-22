
class Solution {
    
    int lcs(string& s1, string& s2, int ind1, int ind2,  vector<vector<int>>& dp){

    if(ind1<0 || ind2<0)
        return 0;
        
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
    
    if(s1[ind1] == s2[ind2])
        return dp[ind1][ind2] = 1 + lcs(s1,s2,ind1-1,ind2-1,dp);
    
    else 
        return dp[ind1][ind2] = 0 + max(lcs(s1,s2,ind1,ind2-1,dp),lcs
       (s1,s2,ind1-1,ind2,dp));
   
}

public:
    int longestCommonSubsequence(string s1, string s2) {
    int n=s1.size();
    int m=s2.size();

    vector<vector<int>> dp(n,vector<int>(m,-1));
    return lcs(s1,s2,n-1,m-1,dp);
    }
};
