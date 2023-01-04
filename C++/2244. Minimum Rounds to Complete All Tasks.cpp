class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        int output=0;
        
        for (auto x: mp){
            if(x.second==1)
                return -1;
            if(x.second%3==0){
                output += x.second/3;
            }
            else{
                output += x.second/3 +1;
            }
        }
        return output;
    }
};
