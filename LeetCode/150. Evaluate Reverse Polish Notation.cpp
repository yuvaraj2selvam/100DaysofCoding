class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        
        for(auto x:tokens)
        {
            if(x=="+")
            {
                long long int b=s.top();
                s.pop();
               long long  int a=s.top();
                s.pop();
                s.push(a+b);
            }
            else if(x=="-")
            {
               long long  int b=s.top();
                s.pop();
                long long int a=s.top();
                s.pop();
                s.push(a-b);
            }
              else if(x=="*")
            {
                 long long int b=s.top();
                s.pop();
                long long int a=s.top();
                s.pop();
                s.push(a*b);
            }
              else if(x=="/")
            {
                 long long int b=s.top();
                s.pop();
                 long long int a=s.top();
                s.pop();
                s.push(a/b);
            }
            else
            {
                long long int a=stoi(x);
                s.push(a);
            }
        }
        return s.top();
    }
};
