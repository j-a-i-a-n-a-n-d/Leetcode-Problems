class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0, repeat=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size();j++)
                {
                    if(grid[i][j]==1)
                    {
                        count ++;
                        if(i!=0 && grid[i-1][j] == 1) repeat++;
                        if(j!=0 && grid[i][j-1] == 1) repeat++;
                    }
                }
        }
        return 4*count-repeat*2;
    }
};
// class Solution {
// public:
//     int BFS(int i,int j,int m,int n,vector<vector<int>>&grid)
//     {
//         queue<pair<int,int>> q;
//         q.push({i,j});
//         int perimeter=0;
//         int temp=0;
//         vector<vector<int>>visited(m,vector<int>(n,0));
//         while(!q.empty())
//         {
//             pair<int,int>p = q.front();
//             q.pop();
//             temp =0;
//             int ii = p.first;
//             int jj = p.second;
//             visited[ii][jj]=1;
//             if (ii+1<=m-1 && grid[ii+1][jj])
//             {
//                 temp++;
//                 if (!visited[ii+1][jj])
//                     q.push({ii+1,jj});
//             }
//             if (ii-1>=0 && grid[ii-1][jj])
//             {
//                 temp++;
//                 if (!visited[ii-1][jj])
//                     q.push({ii-1,jj});
//             }
//             if (jj+1<=n-1 && grid[ii][jj+1])
//             {
//                 temp++;
//                 if (!visited[ii][jj+1])
//                     q.push({ii,jj+1});
//             }
//             if (jj-1>=0 && grid[ii][jj-1])
//             {
//                 temp++;
//                 if (!visited[ii][jj-1])
//                     q.push({ii,jj-1});
//             }
//             cout<<temp<<" ";
//             perimeter+=(4-temp);
//         }
//         return perimeter-temp;
//     }
//     int islandPerimeter(vector<vector<int>>& grid)
//     {
//         int m = grid.size();
//         int n = grid[0].size();
        
//          for (int i =0;i<m;i++){
//              for(int j=0;j<n;j++){
//                  if (grid[i][j]==1)return BFS(i,j,m,n,grid);
//              }
//          }
//         return 0;
//     }
// };
