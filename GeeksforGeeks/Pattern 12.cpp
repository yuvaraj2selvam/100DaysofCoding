//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
         int y=n*2-2;;
    for(int i=1;i<=n;i++)
    {   int k=1;
    	for(int j=0;j<i;j++)
    	{
    		cout<<k++<<" ";

    	}
    	
    	for(int i=0;i<y;i++)
    	{
    		cout<<" ";
    	}
    	for(int i=0;i<y;i++)
    	{
    		cout<<" ";
    	}

    	int m=n;
    	for(int j=0;j<n;j++)
    	{
    		cout<<--k<<" ";
    		if(k==1)break;
    	}
    	y-=2;
    	cout<<"\n";
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
