class Solution {
public:
    string sortSentence(string s) {
        vector<string> res(10);
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                res[s[i]-'1']=temp+" ";
                temp="";
                i++;
            }
            else{
                temp+=s[i];
            }
        }
        for(int i=0;i<res.size();i++){
            temp+=res[i];
        }
        temp.pop_back();
        return temp;
    }
};
