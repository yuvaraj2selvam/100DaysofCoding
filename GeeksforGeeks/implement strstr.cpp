//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int c=-1;
    int j=0,v=0;
    
   // string s = "ababaaaaaa", x = "ab";
    
    for(int i=0;i<s.size();i++)
    {    int a=i;
    	if(x[0]==s[i])
    	{   
    		for(int j=0;j<x.size() && a<s.size();j++,a++)
    		{
              if(s[a]!=x[j])
              	{
              	    break;

              	}
              if(j+1==x.size())return i;	
              
    		}
    	}
    }
    return -1;
}
