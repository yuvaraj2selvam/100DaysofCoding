//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
    int q=n-1;
    for(int i=0;i<n;i++)
    {    for(int j=0;j<n;j++)
    	{
    	    if(q<=j)cout<<"*"; // 0 4
    		else cout<<" ";
    	}
    	q--;
    	cout<<endl;
    }
    q=0;
    for(int i=n;i>0;i--)
    {
    	for(int j=0;j<n;j++)
    	{    
    		if(q<=j)cout<<"*";
    		else cout<<" ";
    	}
    	q++;
    	cout<<endl;
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends
