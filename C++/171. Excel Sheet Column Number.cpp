class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle)
        {
            int d = c - 'A' + 1;
            result = result * 26 + d;
            cout<<c<<" "<<d<<" "<<result<<endl;
        }
        return result;
    }
};
