class Solution {
public:
   vector<vector<int>> diagonalSort(vector<vector<int>>& matrix) 
   {
        int m = matrix.size(); 
        int n = matrix[0].size();
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> map;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                map[i - j].push(matrix[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = map[i - j].top(); map[i - j].pop();
            }
        }
        return matrix;
    }
};