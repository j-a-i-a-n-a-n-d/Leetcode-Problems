class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        int x0=coordinates[0][0];
        int y0=coordinates[0][1];   
        int x1=coordinates[1][0];
        int y1=coordinates[1][1];
        
        float slope1 = 0.0,slope2=0.0;
        slope1= (float)(y1-y0)/(x1-x0);
        float okbhai=x1-x0;
        for(int i=2;i<coordinates.size();i++)
        {
            x0=x1;y0=y1;
            x1=coordinates[i][0];
            y1=coordinates[i][1];
            if (x1-x0==0 && okbhai==0.0)continue;
            slope2= (float)(y1-y0)/(x1-x0);
            if (slope1!=slope2)return false;
        }
        return true;
    }
};