class Solution {
public:
    int totalFruit(vector<int>& frut) {
        int i=0,j=0;
        int k=0;
        int t=0;
        unordered_map<int,int>m;
        while(i<frut.size())
        {
            m[frut[i]]++; i++;
            if(m.size()>2)
            {
                 m[frut[j]]--;
                 if(m[frut[j]]==0)m.erase(frut[j]);
                j++;
            } 
           
            k=max(k,i-j);
        }
        return k;
    }
};
