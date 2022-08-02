class Solution {
public:
    vector<int> merge(vector<int>&l1,vector<int>&l2)
    {
        int l1s=l1.size();
        int l2s=l2.size();
        int i=0;int j=0;
        vector<int> s;
        while(i<l1.size() && j<l2.size())
        {
            if(l1[i]<=l2[j])
            {
                s.push_back(l1[i]);
                    i++;
            }
            else
            {
                s.push_back(l2[j]);
                    j++;
            }
        }
        while(i<l1s)
        {
            s.push_back(l1[i]);
                    i++;
        }
        while(j<l2s)
        {
            s.push_back(l2[j]);
                    j++;
        }
        return s;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int size=matrix.size();
        vector<int> sol;
        for(int i=0;i<matrix.size();i++)
        {
            sol=merge(sol,matrix[i]);
        }
        return sol[k-1];
    }
};