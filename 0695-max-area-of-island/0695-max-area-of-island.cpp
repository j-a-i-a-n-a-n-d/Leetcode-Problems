class Solution {
public:
    int BFS(vector<vector<int>>& grid,vector<vector<int>>&visited,int i,int j,int m,int n)
    {
        queue<pair<int,int>>q;
        q.push(make_pair(i,j));
        int area =0;
        while (!q.empty())
        {
            pair<int,int> p;
            p = q.front();
            q.pop();
            i = p.first;
            j = p.second;
            
            if(visited[i][j])continue;
            visited[i][j]=1;
            area++;
            
            if(i-1>=0 && grid[i-1][j]==1 && !visited[i-1][j])q.push({i-1,j});
            
            
            if(i+1<m && grid[i+1][j]==1 && !visited[i+1][j])q.push({i+1,j});
            
            if(j-1>=0 && grid[i][j-1]==1 && !visited[i][j-1])q.push({i,j-1});
            
            
            if(j+1<n && grid[i][j+1]==1 && !visited[i][j+1])q.push({i,j+1});
            
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int maxxy=0;
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (!visited[i][j] && grid[i][j]==1)
                {
                int area = BFS(grid,visited,i,j,m,n);
                cout<<i<< " "<<j<<endl;
                cout<<area<<" ";
                maxxy = max(area,maxxy);
                }
                else visited[i][j]=1;
            }
        }
        return maxxy;
    }
};

