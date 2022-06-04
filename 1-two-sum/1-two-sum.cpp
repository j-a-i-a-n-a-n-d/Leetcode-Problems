class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target)
    {
        int i=0,j=0;int flag=-1;
        for(i=0;i<v.size();i++)
        {
            int x=target-v[i];
            for(j=i+1;j<v.size();j++)
            {
                if(v[j]==x)
                {
                    flag=1;
                    break;
                }
            }
            if (flag==1)break;
        }
        return {i,j};
    }
};