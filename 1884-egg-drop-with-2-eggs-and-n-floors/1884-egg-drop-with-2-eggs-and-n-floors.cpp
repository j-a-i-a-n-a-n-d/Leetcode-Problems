class Solution {
public:
    int twoEggDrop(int n) 
    {
        int sol =0;
        int ctr=1;
        while(n>0)
        {
            n-=ctr;
            ctr++;
            sol++;
        }
        return sol;
    }
};