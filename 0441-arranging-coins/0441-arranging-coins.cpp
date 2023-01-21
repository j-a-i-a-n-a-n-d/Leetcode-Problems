class Solution {
public:
    int arrangeCoins(int n)
    {
        int x=1;
        int sol=0;
        while(n>0)
        {
            if (n-x>=0){n-=x;sol++;
   }         else break;
            x= x+1;
        }
        return sol;
    }
};