//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int b=0,a=-1;
        int f1=0,f2=0;
        for(int i=1;i<n;i++)
            {   
                if(arr[i]==arr[i-1])
                {
                 b=arr[i];
                 f1=1; 
                }
                if(arr[i-1]+1!=arr[i] && arr[i-1]!=arr[i] )
                {
                 a=arr[i-1]+1;
                 f2=1;
                }
                if(f1 && f2)
                   break;
            }
       
        if(arr[0]!=1)a=1;
        if(a==-1)a=n;
        
        arr[0]=b,arr[1]=a;
        return arr;
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
