//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int count=0;
        sort(arr,arr+n);
        int f=0,k=0;
        int d=arr[0];
        for(int i=1;i<n;i++)
        {   if(arr[i]==0||d==0)
            {f=1;
            if(arr[i]>=0)
            {   k=1;
                if(!(1+d==arr[i] ||d-1==arr[i]))
                   {
                       return arr[i]+1;
                   }  
            }
             else
             d=arr[i];
            }
            
        }   
            
        if(k==0)return 0;
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
