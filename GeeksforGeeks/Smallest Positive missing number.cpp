//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int missingNumber(int arr[], int n) 
      { 

        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr[i] = 0;
            }
        }
        sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 1)
            {
                count++;
                break;
            }
        }
        if(!count)
        {
            return 1;
        }

        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>1)
            {
                return (arr[i]+1);
            }
        }
        
        return arr[n-1]+1;

    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends
