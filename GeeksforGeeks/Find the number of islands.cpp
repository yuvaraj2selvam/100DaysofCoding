//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void island(vector<vector<char>> grid,int r,int c,vector<vector<int>>&vis)
    {
        vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int r1=q.front().first;
            int c1=q.front().second;
            q.pop();
            
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    int nebr=r1-i;
                    int nebc=c1-j;
                    
                    if(nebr>=0 && nebr<n && nebc>=0 && nebc<=m && grid[nebr][nebc]=='1' && vis[nebr][nebc]==0)
                    {
                        vis[nebr][nebc]=1;
                        q.push({nebr,nebc});
                    }
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        int count=0;
        for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
                {
                 if(grid[i][j]=='1' && !vis[i][j])
                   {
                    count++;
                    island(grid,i,j,vis);
                   }
                }
           }
          return count; 
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
