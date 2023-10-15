class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(auto x:words)
        {
            string temp=x;
            ans=temp;
            reverse(temp.begin(),temp.end());
            if(temp==ans)
                return ans;
        }
        return "";
    }
};
