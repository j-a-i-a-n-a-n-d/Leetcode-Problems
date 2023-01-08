class Solution {
public:
    double SOTC(float x1,float x2,float y1,float y2)
    {
        if (y2==y1)return 0;
        if (x2==x1)return INT_MAX; 
        return (y2-y1)/(x2-x1);
    }
    int maxPoints(vector<vector<int>>& points) 
    {
        int maxxy=0;
        if (points.size()<=2)return points.size();
        int paralelToYaxis=0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<double,int>mp;
            for(int j =i+1;j<points.size();j++)
            {
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                float slope = SOTC(x1,x2,y1,y2);
                mp[slope]++;
                if (maxxy < mp[slope] )maxxy = mp[slope];
            }
        }
        //for(auto it : mp)
        //{
        //    cout<<it.first<<" "<<it.second<<endl;
        //}
        return maxxy+1;
    }
};