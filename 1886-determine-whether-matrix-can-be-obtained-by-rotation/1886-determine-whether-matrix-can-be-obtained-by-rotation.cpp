class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        bool a= clockwise(mat,target);
        bool b= clockwise(mat,target);
        bool c= clockwise(mat,target);
        bool d= clockwise(mat,target);
        if (a || b || c|| d)
        {
            return true;
        }
       /* for (int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                cout<<mat[i][j]<< " ";
            }
            cout<<endl;
        }*/
      return false;  
    }
    bool clockwise(vector<vector<int>>&mat,vector<vector<int>>&target)
    {
        int k=0;
        int m=mat.size();
        for (int i=0;i<m;i++)
        {
            for(int j=k;j<m;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
            k++;
        }
        for(int i=0;i<m/2;i++)
        {
            for(int j=0;j<m;j++)
            {
                swap(mat[j][i],mat[j][m-i-1]);
            }
        }
        
        //compare
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (mat[i][j]!=target[i][j])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};