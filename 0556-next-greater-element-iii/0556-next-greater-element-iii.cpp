class Solution {
public:
    int nextGreaterElement(int n)
    {
        vector<int> ha;
        long long int sol=0;
        while(n>0)
        {
            int rem = n%10;
            n=n/10;
            ha.push_back(rem);
        }
        reverse(ha.begin(),ha.end());
        bool flag = next_permutation(ha.begin(),ha.end());
        if (!flag)return -1;
        for(auto i : ha)cout<<i<<" ";
        for(int i =0;i<ha.size();i++)
        {
            if (sol*10+ha[i]>INT_MAX)return -1;
            sol = sol*10+ ha[i];
        }
        return sol;
        
    }
};