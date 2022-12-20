//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    {   
        int x1=INT_MIN;
        int y1=INT_MAX;
        int x2=INT_MIN;
        int y2=INT_MAX;
        
        for(int i=0;i<n;i++)
        {  
            x1=max(x1,arr[i]-i);
            y1=min(y1,arr[i]-i);
            
            x2=max(x2,arr[i]+i);
            y2=min(y2,arr[i]+i);
            
        }
        int ans= max((x1-y1),(x2-y2));
        return abs(ans);
    } 
    
    
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
