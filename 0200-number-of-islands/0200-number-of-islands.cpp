class Solution {
public:
    void BFS(vector<vector<char>>&grid,vector<vector<int>>&visited,int i,int j,int m,int n)
    {
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        while (!q.empty())
        {
            pair<int,int>p;
            p=q.front();
            q.pop();
            i = p.first;
            j = p.second;
            if(visited[i][j])continue;
            visited[i][j]=1;
            
            if(i-1>=0 && !visited[i-1][j] && grid[i][j]=='1')q.push({i-1,j});
            if(i+1<m && !visited[i+1][j]  && grid[i][j]=='1')q.push({i+1,j});
            if(j-1>=0 && !visited[i][j-1]  && grid[i][j]=='1')q.push({i,j-1});
            if(j+1<n && !visited[i][j+1]  && grid[i][j]=='1')q.push({i,j+1});
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        int islands=0;
        
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[i][j] && grid[i][j]=='1'){BFS(grid,visited,i,j,m,n);islands++;}
                else
                    visited[i][j]=1;
            }
        }
        return islands;
    }
};