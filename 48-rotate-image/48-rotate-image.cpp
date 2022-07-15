class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int m=matrix.size();
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=k;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
            k++;
        }
        
        for(int i=0;i<m/2;i++)
        {
            for(int j=0;j<m;j++)
            {
                swap(matrix[j][i],matrix[j][m-1-i]);
            }
        }
    }
};