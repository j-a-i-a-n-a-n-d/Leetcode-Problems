class Solution {
public:
    void BFS(int i,int j,int c,vector<vector<int>>& image,int m,int n)
    {
        queue<pair<int,int>> q;
        q.push({i,j});
        vector<vector<int>>visited(m,vector<int>(n,0));
        int mcolor = image[i][j];
        
        while(!q.empty())
        {
            pair<int,int> p = q.front();
            q.pop();
            int ii = p.first;
            int jj = p.second;
            visited[ii][jj]=1;
            image[ii][jj]=c;
            
            if (ii+1<=m-1 && !visited[ii+1][jj] && image[ii+1][jj]==mcolor)q.push(make_pair(ii+1,jj));
            if (ii-1>=0 && !visited[ii-1][jj] && image[ii-1][jj]==mcolor)q.push(make_pair(ii-1,jj));
            if (jj+1<=n-1 && !visited[ii][jj+1] && image[ii][jj+1]==mcolor)q.push(make_pair(ii,jj+1));
            if (jj-1>=0 && !visited[ii][jj-1] && image[ii][jj-1]==mcolor)q.push(make_pair(ii,jj-1));
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        BFS(sr,sc,color,image,image.size(),image[0].size());
        return image;
    }
};