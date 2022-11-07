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

// class Solution {
//     public int maxAreaOfIsland(int[][] grid) {
//         int maxArea = 0;
//         int rows = grid.length;
//         int cols = grid[0].length;
//         boolean visited[][] = new boolean[rows][cols];
            
//         for(int row=0;row<rows;row++){
//             for(int col=0;col<cols;col++){
//                 if(grid[row][col]==1&&!visited[row][col]){
//                     int currArea = bfs(grid,visited,row,col,rows,cols);
//                     maxArea = Math.max(maxArea,currArea);
//                 }
//             }
//         }
        
//         return maxArea;
//     }
    
//     private int bfs(int grid[][],boolean visited[][],int row,int col,int rows,int cols){
//         Queue<int[]> queue = new ArrayDeque();
//         queue.add(new int[]{row,col});
//         int currArea = 0;
        
//         while(queue.size()>0){
//             int arr[] = queue.remove();
//             row = arr[0];
//             col = arr[1];
            
//             if(visited[row][col]) continue;
            
//             visited[row][col] = true;
//             currArea++;
            
//             if(row-1>=0&&grid[row-1][col]==1&&!visited[row-1][col]){
//                 queue.add(new int[]{row-1,col});
//             }
//             if(row+1<rows&&grid[row+1][col]==1&&!visited[row+1][col]){
//                 queue.add(new int[]{row+1,col});
//             }
//             if(col-1>=0&&grid[row][col-1]==1&&!visited[row][col-1]){
//                 queue.add(new int[]{row,col-1});
//             }
//             if(col+1<cols&&grid[row][col+1]==1&&!visited[row][col+1]){
//                 queue.add(new int[]{row,col+1});
//             }
//         }
        
//         return currArea;
//     }
// }
