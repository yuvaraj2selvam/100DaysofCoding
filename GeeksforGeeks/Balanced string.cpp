//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

// User function template for c++

class Solution {
  public:
  string BalancedString(int N) {
        // code here
        string ar="";
        string ans="";
        for(char i='a';i<='z';i++){
            ar+=i;
        }
        if(N%2==0){
            while(N>=26){
                ans+=ar;
                N-=26;
            }
            for(int i=0;i<N/2;i++){
                ans+='a'+i;
            }
            for(int i=N/2-1;i>=0;i--){
                ans+='z'-i;
            }
        }
        else{
            
            int sum=0;
            int asd=N;
            while(asd>0){
                sum+=asd%10;
                asd/=10;
            }
            while(N>=26){
                ans+=ar;
                N-=26;
            }
            if(sum%2==0){
                for(int i=0;i<(N+1)/2;i++){
                    ans+='a'+i;
                }
                for(int i=(N-1)/2-1;i>=0;i--){
                    ans+='z'-i;
                }
            }
            else{
                for(int i=0;i<(N-1)/2;i++){
                    ans+='a'+i;
                }
                for(int i=(N+1)/2-1;i>=0;i--){
                    ans+='z'-i;
                }
            }
            
        }
        return ans;
    }};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
