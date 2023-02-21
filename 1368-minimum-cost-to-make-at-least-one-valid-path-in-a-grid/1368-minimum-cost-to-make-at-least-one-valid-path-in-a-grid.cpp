class Solution {
public:
    typedef struct node
    {
        int get1,get2,get3;
    }node;
    bool isValid(int i,int j,int n,int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
    int minCost(vector<vector<int>>& grid) 
    {
        vector<vector<int>> vps= {{0,1},{0,-1},{1,0},{-1,0}};
                                 //  0       1     2      3
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        deque<node> dq;
        dq.push_front({0,0});
        dis[0][0]=0;
        while(!dq.empty())
        {
            node temp = dq.front();
            dq.pop_front();
            int a = temp.get1;
            int b = temp.get2;
            int direction = grid[a][b];
            for(int i=0;i<4;i++)
            {
                int ii = a+vps[i][0];
                int jj = b+vps[i][1];
                if (isValid(ii,jj,n,m) && direction==i+1 && (dis[a][b] < dis[ii][jj]))
                {
                    dis[ii][jj]=dis[a][b];
                    dq.push_front({ii,jj});
                }
                else if (isValid(ii,jj,n,m) && (dis[a][b] < dis[ii][jj]))
                {
                    dis[ii][jj]=dis[a][b]+1;
                    dq.push_back({ii,jj});
                }       
            }
        }
        //for(int i=0;i<n;i++)
        //{
        //    for(int j=0;j<m;j++)
        //    {
        //        cout<<dis[i][j]<<" ";
        //    }
        //    cout<<endl;
        //}
        return dis[n-1][m-1];    
    }
};