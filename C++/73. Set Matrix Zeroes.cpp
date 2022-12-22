class Solution {
public:
    
    void setzero(vector<vector<int>>& matrix,int i,int j,int n,int m)
    {
        for(int x=0;x<n;x++)
        {
            if(matrix[x][j]!=0)
            matrix[x][j]=INT_MIN+9;
        }
        for(int y=0;y<m;y++)
        {   if(matrix[i][y]!=0)
            matrix[i][y]=INT_MIN+9;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {   int c=0;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                 setzero(matrix,i,j,n,m);   
                }
            }
        }
        for(int i=0;i<n;i++)
        {   int c=0;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==INT_MIN+9)
                {
                    matrix[i][j]=0;
                }
        }
        }
    }
};
