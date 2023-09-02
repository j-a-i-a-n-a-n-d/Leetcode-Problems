class Solution {
public:
    vector<int> findIntersection(int a1,int a2,int b1,int b2)
    {
        if (a1 <= b2 && b1 <= a2) 
        {
            int max_start = std::max(a1, b1);
            int min_end = std::min(a2, b2);
            
            return {max_start, min_end};
        }
        return {};
    }
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList)
    {
        int n = firstList.size();
        int m = secondList.size();
        int i=0;
        int j=0;
        vector<vector<int>> ans;
        while(i<n && j<m)
        {
            if (!findIntersection(firstList[i][0],firstList[i][1],secondList[j][0],secondList[j][1]).empty())
            {
                ans.push_back(findIntersection(firstList[i][0],firstList[i][1],secondList[j][0],secondList[j][1]));
            }
            if(firstList[i][1]>secondList[j][1])j++;
            else if (firstList[i][1]<secondList[j][1])i++;
            else {i++;j++;}
        }
        return ans;
    }
};