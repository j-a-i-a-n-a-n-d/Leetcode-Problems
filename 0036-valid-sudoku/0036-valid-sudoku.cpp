class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string>opSet;
        int boxNo=0;
        int n = board.size();
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.')continue;
                boxNo = ((i)/3)*3+(j)/3;
                string s1 ="BOXNO"+to_string(boxNo)+to_string(board[i][j]-'0');
                string s2 ="ROW"+to_string(i+1)+to_string(board[i][j]-'0');
                string s3 ="COL"+to_string(j+1)+to_string(board[i][j]-'0');
                if(   opSet.find(s1)!=opSet.end()
                   || opSet.find(s2)!=opSet.end()
                   || opSet.find(s3)!=opSet.end())
                    return false;
                opSet.insert(s1);
                opSet.insert(s2);
                opSet.insert(s3); 
            }
        }
        return true;
    }
};